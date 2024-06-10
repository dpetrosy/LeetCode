class Solution
{
public:
    vector<int> countingSort(vector<int>& heights)
    {
        unordered_map<int, int> hashMap;
        vector<int> sortedHeights;
        int minNum = heights[0];
        int maxNum = heights[0];

        for (auto num : heights)
        {
            minNum = min(minNum, num);
            maxNum = max(maxNum, num);
            hashMap[num]++;
        }

        for (; minNum <= maxNum; ++minNum)
        {
            for (int i = 0; i < hashMap[minNum]; ++i)
                sortedHeights.push_back(minNum);
        }
        return sortedHeights;
    }

    int heightChecker(vector<int>& heights)
    {
        vector<int> sortedHeights = countingSort(heights);

        int count = 0;
        for (int i = 0; i < heights.size(); ++i)
        {
            if (heights[i] != sortedHeights[i])
                ++count;
        }
        return count;
    }
};
