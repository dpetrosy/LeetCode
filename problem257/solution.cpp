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
    void collectPaths(TreeNode* root, vector<string>& paths, string str)
    {
        if (!root)
           return;

        str += std::to_string(root->val);
        if (!root->left && !root->right)
            paths.push_back(str);

        str += "->";
        collectPaths(root->left, paths, str);
        collectPaths(root->right, paths, str);
    }

    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> paths;
        collectPaths(root, paths, "");
        return paths;
    }
};
