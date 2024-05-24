class Solution
{
public:
    string tictactoe(vector<vector<int>>& moves)
    {
        int size = moves.size();
        vector<vector<char>> matrix(3, vector<char>(3, '#'));
        for (int i = 0; i < size; ++i)
        {
            if (i % 2 == 0)
                matrix[moves[i][0]][moves[i][1]] = 'X';
            else
                matrix[moves[i][0]][moves[i][1]] = 'O';
        }

        if (matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2] && matrix[0][0] != '#')
            return (matrix[0][0] == 'X' ? "A" : "B");
        if (matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2] && matrix[1][0] != '#')
            return (matrix[1][0] == 'X' ? "A" : "B");
        if (matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2] && matrix[2][0] != '#')
            return (matrix[2][0] == 'X' ? "A" : "B");

        if (matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0] && matrix[0][0] != '#')
            return (matrix[0][0] == 'X' ? "A" : "B");
        if (matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1] && matrix[0][1] != '#')
            return (matrix[0][1] == 'X' ? "A" : "B");
        if (matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2] && matrix[0][2] != '#')
            return (matrix[0][2] == 'X' ? "A" : "B");

        if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2] && matrix[0][0] != '#')
            return (matrix[0][0] == 'X' ? "A" : "B");
        if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0] && matrix[0][2] != '#')
            return (matrix[0][2] == 'X' ? "A" : "B");
        return (size == 9 ? "Draw" : "Pending");
    }
};
