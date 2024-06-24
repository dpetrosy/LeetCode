class Solution
{
public:
    int mostFrequentEven(vector<int>& nums)
    {
        unordered_map<int, int> hashMap;

        for (int num : nums)
        {
            if (num % 2 == 0)
                hashMap[num]++;
        }

        int ans = -1;
        int maxFreq = numeric_limits<int>::min();
        for (auto [num, count] : hashMap)
        {
            if (count > maxFreq)
            {
                maxFreq = count;
                ans = num;
            }
            else if (count == maxFreq && num < ans)
                ans = num;
        }
        return ans;
    }
};
