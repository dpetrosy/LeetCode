class Solution
{
public:
    vector<int> intersection(vector<vector<int>>& nums)
    {
        vector<int> ans;
        unordered_map<int, int> hashMap;

        int size = nums.size();
        for (auto& vec : nums)
        {
            for (auto num : vec)
            {
                hashMap[num]++;
                if (hashMap[num] == size)
                    ans.push_back(num);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
