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
    int treeHeight(TreeNode* root, int& diameter)
    {
        if (!root)
            return 0;

        int heightL = treeHeight(root->left, diameter);
        int heightR = treeHeight(root->right, diameter);

        diameter = max(diameter, heightL + heightR);
        return max(heightL, heightR) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root)
    {
        int diameter = 0;
        treeHeight(root, diameter);
        return diameter;
    }
};
