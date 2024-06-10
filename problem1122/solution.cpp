class Solution
{
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
        unordered_map<int, int> hashMap;
        int minNum = arr1[0];
        int maxNum = arr1[0];

        for (auto num : arr1)
        {
            minNum = min(minNum, num);
            maxNum = max(maxNum, num);
            hashMap[num]++;
        }

        auto it = arr1.begin();
        for (auto num : arr2)
        {
            fill_n(it, hashMap[num], num);
            advance(it, hashMap[num]);
            hashMap.erase(num);
        }

        for (; minNum <= maxNum; ++minNum)
        {
            if (hashMap.find(minNum) != hashMap.end())
            {
                fill_n(it, hashMap[minNum], minNum);
                advance(it, hashMap[minNum]);
            }
        }
        return arr1;
    }
};
