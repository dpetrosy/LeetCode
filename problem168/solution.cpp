class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string result = "";
        char start = 64; // 'A' - 1

        while (columnNumber)
        {
            if (columnNumber % 26 == 0)
            {
                result.insert(0, 1, 'Z');
                --columnNumber;
            }
            else
                result.insert(0, 1, char(start + columnNumber % 26));
            
            columnNumber /= 26;
        }
        return result;
    }
};
