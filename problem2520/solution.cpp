class Solution
{
public:
    int countDigits(int num)
    {
        int tmp = num;
        int count = 0;
        int digit;

        while (tmp)
        {
            digit = tmp % 10;
            if (num % digit == 0)
                ++count;
            tmp /= 10;
        }
        return count;
    }
};
