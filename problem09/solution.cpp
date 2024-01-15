class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;
        
        long long result = 0;
        int temp = x;
        while (temp > 0)
        {
            result *= 10;
            result += temp % 10;
            temp /= 10;
        }
        if (result == x)
            return true;
        return false;
    }
};
