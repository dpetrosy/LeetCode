class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int numsGCD = gcd(a, b);
        int count = 0;

        for (int i = 1; i <= numsGCD; ++i)
            if (numsGCD % i == 0)
                ++count;
        return count;
    }
};
