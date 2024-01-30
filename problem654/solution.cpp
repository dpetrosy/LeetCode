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
    int maxIndex(vector<int>& nums, int left, int right)
    {
        int i = left;

        for (;left <= right; ++left)
            if (nums[left] > nums[i])
                i = left;
        return i;
    }

    TreeNode* construct(vector<int>& nums, int left, int right)
    {
        if (left > right)
            return nullptr;

        int i = maxIndex(nums, left, right);
        TreeNode* p = new TreeNode(nums[i]);
        p->left = construct(nums, left, i - 1);
        p->right = construct(nums, i + 1, right);
        return p;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums)
    {
        return construct(nums, 0, nums.size() - 1);
    }
};
