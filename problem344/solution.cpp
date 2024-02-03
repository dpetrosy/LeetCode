class Solution
{
public:
    void reverseString(vector<char>& s)
    {
        int end = s.size() - 1;

        for (int start = 0; start < end; ++start, --end)
            std::swap(s[start], s[end]);
    }
};
