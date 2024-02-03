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
    int goodNodes(TreeNode* root, int pathMax = INT_MIN)
    {
        if (!root)
            return 0;

        int count = 0;
        if (root->val >= pathMax)
        {
            ++count;
            pathMax = root->val;
        }

        return goodNodes(root->left, pathMax) + goodNodes(root->right, pathMax) + count;
    }
};
