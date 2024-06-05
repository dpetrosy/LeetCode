class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> hashMap;

        int oddCount = 0;
        for (char c : s)
        {
            hashMap[c]++;
            if (hashMap[c] % 2 == 0)
                --oddCount;
            else
                ++oddCount;
        }
        if (oddCount > 1)
            return s.length() - oddCount + 1;
        return s.length();
    }
};
