class Solution
{
public:
    int climbStairs(int n)
    {
        int first = 0;
        int second = 1;
        int count = 0;

        for (int i = 1; i <= n; ++i)
        {
            count = first + second;
            first = second;
            second = count;
        }
        return count;
    }
};
