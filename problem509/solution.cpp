class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;

        int first = 0;
        int second = 1;
        int num = 1;

        for (int i = 1; i < n; ++i)
        {
            num = first + second;
            first = second;
            second = num;
        }
        return num;
    }
};
