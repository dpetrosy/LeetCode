class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int size = nums.size();
        vector<int> result(size);

        int left = 0;
        int right = size - 1;
        for (int end = right; left <= right; --end)
        {
            if (abs(nums[left]) < abs(nums[right]))
                result[end] = nums[right] * nums[right--];
            else
                result[end] = nums[left] * nums[left++];
        }
        return result;
    }
};
