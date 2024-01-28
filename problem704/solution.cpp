class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int middle = 0;

        while (start <= end)
        {
            middle = end - (end - start) / 2;

            if (nums[middle] == target)
                return middle;
            if (target < nums[middle])
                end = middle - 1;
            else
                start = middle + 1;
        }
        return -1;
    }
};
