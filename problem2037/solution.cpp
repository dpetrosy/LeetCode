class Solution
{
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students)
    {
        int maxPos = max(*max_element(seats.begin(), seats.end()), 
                    *max_element(students.begin(), students.end()));

        vector<int> diff(maxPos + 1, 0);
        for (int i = 0; i < seats.size(); ++i)
        {
            diff[seats[i]] += 1;
            diff[students[i]] -= 1;
        }

        int moves = 0;
        int unmatched = 0;
        for (int num : diff)
        {
            moves += abs(unmatched);
            unmatched += num;
        }
        return moves;
    }
};
