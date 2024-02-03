class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        int vecSize = strs.size();
        int len = strs[0].length();

        for (int i = 0; i < len; ++i)
        {
            for (int j = 1; j < vecSize; ++j)
                if (strs[0][i] != strs[j][i])
                    return strs[0].substr(0, i);
        }
        return strs[0];
    }
};
