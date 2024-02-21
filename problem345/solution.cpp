class Solution
{
public:
    bool isVowel(char ch)
    {
        char c = std::tolower(ch);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s)
    {
        int end = s.length() - 1;

        for (int start = 0; start < end;)
        {
            if (!isVowel(s[start]))
                ++start;
            else if (!isVowel(s[end]))
                --end;
            else
                std::swap(s[start++], s[end--]);
        }
        return s;
    }
};
