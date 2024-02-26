class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        int end = s.length() - 1;
        int start = 0;

        while (start < end)
        {
            if (!std::isalpha(s[start]))
                ++start;
            if (!std::isalpha(s[end]))
                --end;
            if (std::isalpha(s[start]) && std::isalpha(s[end]))
                std::swap(s[start++], s[end--]);
        }
        return s;
    }
};
