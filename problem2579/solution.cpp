class Solution
{
public:
    long long coloredCells(int n)
    {
        long long cells = 1;
        int addByStep = 0;

        for (int i = 1; i <= n; ++i)
        {
            cells += addByStep;
            addByStep += 4;
        }
        return cells;
    }
};
