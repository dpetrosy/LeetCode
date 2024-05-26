class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> lastSeen;
        int len = s.length();

        int left = 0;
        int maxLen = 0;
        for (int right = 0; right < len; ++right)
        {
            if (lastSeen.find(s[right]) != lastSeen.end() && lastSeen[s[right]] >= left)
                left = lastSeen[s[right]] + 1;
            lastSeen[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
