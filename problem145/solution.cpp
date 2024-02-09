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
    void postorder(TreeNode* root, std::vector<int>& vec)
    {
        if (!root)
            return;

        postorder(root->left, vec);
        postorder(root->right, vec);
        vec.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root)
    {
        std::vector<int> vec;
        postorder(root, vec);
        return vec;
    }
};
