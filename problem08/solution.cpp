class Solution
{
public:
    int myAtoi(string s)
    {
        long num = 0;
        int sign = 1;
	    int i = 0;

        while (s[i] == ' ')
            ++i;
        if (s[i] == '-' || s[i] == '+')
            if (s[i++] == '-')
                sign = -1;
        while (isdigit(s[i]))
        {
            num *= 10;
            num += s[i] - '0';
            ++i;
            if(num > INT_MAX)
                return (sign == 1) ? INT_MAX : INT_MIN;
        }
        return num * sign;
    }
};
