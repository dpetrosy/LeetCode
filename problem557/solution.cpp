class Solution
{
public:
    string reverseWords(string s)
    {
        int len = s.length();
        int slow = 0;

        for (int fast = 0; fast <= len; ++fast)
        {
            if (s[fast] == ' ' || fast == len)
            {
                std::reverse(s.begin() + slow, s.begin() + fast);
                slow = fast + 1;
            }
        }
        return s;
    }
};
