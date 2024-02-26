class Solution
{
public:
    string finalString(string s)
    {
        std::string result = "";
        int size = s.length();
        int iCharCount = 0;

        for (int i = 0; i < size; ++i)
        {
            if (s[i] == 'i')
                ++iCharCount;
            else
                result += s[i];
            if ((s[i + 1] != 'i') && (iCharCount % 2 != 0))
            {
                std::reverse(result.begin(), result.end());
                iCharCount = 0;
            }
        }
        return result;
    }
};
