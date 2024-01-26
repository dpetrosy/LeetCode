class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        int size = nums.size();
        int totalSum = (size * (size + 1))/2;
        int arrSum = 0;

        for (int i : nums)
            arrSum += i;

        return (totalSum - arrSum);
    }
};
