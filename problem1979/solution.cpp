class Solution
{
public:
    int findGCD(vector<int>& nums)
    {
        int min = nums[0];
        int max = nums[0];

        for (int i : nums)
        {
            max = std::max(i, max);
            min = std::min(i, min);
        }
        return std::gcd(min, max);
    }
};
