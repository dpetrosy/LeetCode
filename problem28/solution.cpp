class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int haystackLen = haystack.length();
        int needleLen = needle.length();
        int retI;

        for (int i = 0; i < haystackLen;)
        {
            retI = i;
            for (int j = 0; haystack[i] == needle[j]; ++i, ++j)
            {
                if (needleLen == j + 1)
                    return retI;
            }
            i = retI + 1;
        }
        return -1;
    }
};
