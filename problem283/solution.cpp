class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int size = nums.size();
        int slow = 0;
        int fast = 0;

        while (fast < size)
        {
            if (nums[fast] != 0)
            {
                std::swap(nums[slow], nums[fast]);
                ++slow;
            }
            ++fast;
        }
    }
};
