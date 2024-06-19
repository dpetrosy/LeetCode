class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int left = 1;
        for (int right = 1; right < nums.size(); ++right)
        {
            if (nums[right] != nums[left - 1])
                swap(nums[right], nums[left++]);
        }
        return left;
    }
};
