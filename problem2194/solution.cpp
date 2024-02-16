class Solution
{
public:
    vector<string> cellsInRange(string s)
    {
        vector<string> cells;

        for (char i = s[0]; i <= s[3]; ++i)
            for (char j = s[1]; j <= s[4]; ++j)
                cells.push_back(std::string(1, i) + j);
        return cells;
    }
};
