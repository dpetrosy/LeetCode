class Solution
{
public:
    bool isHappy(int n)
    {
        int tmp;
        int digit;

        while (n > 9)
        {
            tmp = n;
            n = 0;

            while (tmp)
            {
                digit = tmp % 10;
                tmp /= 10;
                n += digit * digit;
            }
        }
        return (n == 1 || n == 7);
    }
};
