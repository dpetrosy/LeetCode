class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> nums(n + 1);
        nums[0] = 0;
        if (n == 0)
            return nums;

        nums[1] = 1;
        int last_power_of_2 = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (i == last_power_of_2 * 2)
            {
                nums[i] = 1;
                last_power_of_2 = i;
            }
            else
                nums[i] = 1 + nums[i - last_power_of_2];
        }
        return nums;
    }
};
