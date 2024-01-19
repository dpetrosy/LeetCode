class Solution
{
public:
    bool containsDuplicate(vector<int>& nums)
    {
        std::unordered_set<int> hashed_nums;
        int size = nums.size();

        for (int i = 0; i < size; ++i)
        {
            if (hashed_nums.find(nums[i]) != hashed_nums.end())
                return true;
            hashed_nums.insert(nums[i]);
        }

        return false;
    }
};
