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
    int minDepth(TreeNode* root)
    {
        if (!root)
            return 0;

        int depthL = minDepth(root->left);
        int depthR = minDepth(root->right);

        if (depthL == 0 || depthR == 0)
            return max(depthL, depthR) + 1;
        return min(depthL, depthR) + 1;
    }
};
