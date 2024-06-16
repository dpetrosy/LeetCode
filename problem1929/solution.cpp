class Solution
{
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        vector<int> ans(nums.size() * 2);

        auto it = copy(nums.begin(), nums.end(), ans.begin());
        copy(nums.begin(), nums.end(), it);
        return ans;
    }
};
