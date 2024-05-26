class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        auto comparator = [](const vector<int>& a, const vector<int>& b) -> bool
        {
            return a[0] < b[0];
        };
        sort(intervals.begin(), intervals.end(), comparator);

        int size = intervals.size();
        vector<vector<int>> result;
        result.emplace_back(intervals[0]);
        for (int i = 1; i < size; ++i)
        {
            if (intervals[i][0] <= result.back()[1])
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            else
                result.emplace_back(intervals[i]);
        }
        return result;
    }
};
