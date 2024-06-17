class Solution
{
public:
    int countAsterisks(string s)
    {
        int asteriskCount = 0;
        int vBarCount = 0;

        for (char c : s)
        {
            if (c == '|')
                ++vBarCount;
            else if (c == '*' && vBarCount % 2 == 0)
                ++asteriskCount;
        }
        return asteriskCount;
    }
};
