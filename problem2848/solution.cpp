class Solution
{
public:
    int numberOfPoints(vector<vector<int>>& nums)
    {
        vector<int> vec(102);

        for (auto& coords : nums)
        {
            vec[coords[0]]++;
            vec[coords[1] + 1]--;
        }
        
        int count = 0;
        for (int i = 1; i < 102; ++i)
        {
            vec[i] += vec[i - 1];
            if (vec[i] > 0)
                ++count;
        }
        return count;
    }
};
