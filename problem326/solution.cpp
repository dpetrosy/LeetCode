class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        double p = std::log10(n) / std::log10(3);
        return (n > 0) && (p - (int)p == 0);
    }
};
