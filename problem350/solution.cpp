class Solution
{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int, int> hashMap;

        for (auto num : nums1)
            hashMap[num]++;

        vector<int> ans;
        for (auto num : nums2)
        {
            if (hashMap[num] > 0)
            {
                ans.push_back(num);
                hashMap[num]--;
            }
        }
        return ans;
    }
};
