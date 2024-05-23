/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> vec2D;
        if (!root)
            return vec2D;

        int height = 0;
        queue<pair<TreeNode*, int>> queue;
        queue.push(make_pair(root, height));
        while (!queue.empty())
        {
            if (vec2D.size() <= queue.front().second)
            {
                ++height;
                vec2D.emplace_back(vector<int>());
            }
            if (root->left)
                queue.push(make_pair(root->left, height));
            if (root->right)
                queue.push(make_pair(root->right, height));

            vec2D[queue.front().second].push_back(root->val);
            queue.pop();
            root = queue.front().first;
        }
        return vec2D;
    }
};
