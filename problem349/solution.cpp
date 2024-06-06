class Solution
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_set<int> hashSet;

        for (auto num : nums1)
            hashSet.insert(num);

        vector<int> vec;
        for (auto num : nums2)
        {
            if (hashSet.find(num) != hashSet.end())
            {
                vec.push_back(num);
                hashSet.erase(num);
            }
        }
        return vec;
    }
};
