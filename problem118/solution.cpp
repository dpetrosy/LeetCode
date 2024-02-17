class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle;

        for (int i = 1; i <= numRows; ++i)
        {
            vector<int> row(i);
            for (int j = 0; j < i; ++j)
            {
                if (j == 0 || j == i - 1)
                    row[j] = 1;
                else
                    row[j] = triangle[i - 2][j - 1] + triangle[i - 2][j];
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};
