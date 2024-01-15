class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int nums_size = nums.size();
        std::unordered_map<int, int> checked_nums;
        auto end = checked_nums.end();
        auto first_num = end;

        for (int i = 0; i != nums_size; ++i)
        {
            first_num = checked_nums.find(target - nums[i]);
            if (first_num != end)
                return {first_num->second, i};
            else
                checked_nums.insert({nums[i], i});
        }
        return {0, 0};
    }
};
