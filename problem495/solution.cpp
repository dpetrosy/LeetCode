class Solution
{
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration)
    {
        int sum = 0;
        int size = timeSeries.size();

        for (int i = 0; i < size - 1; ++i)
        {
            sum += min(duration, timeSeries[i + 1] - timeSeries[i]);
        }
        return sum + duration;
    }
};
