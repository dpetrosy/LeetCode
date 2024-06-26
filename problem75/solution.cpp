class Solution
{
public:
    void sortColors(vector<int>& nums)
    {
        int left = 0;
        int right = nums.size() - 1;

        for (int mid = 0; mid <= right; )
        {
            if (nums[mid] == 0)
                swap(nums[mid++], nums[left++]);
            else if (nums[mid] == 2)
                swap(nums[mid], nums[right--]);
            else
                ++mid;
        }
    }
};
