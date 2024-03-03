class Solution
{
public:
    bool isTriangle(vector<int>& nums)
    {
        return (nums[0] + nums[1] > nums[2]) && (nums[0] + nums[2] > nums[1]) &&
               (nums[1] + nums[2] > nums[0]);
    }

    string triangleType(vector<int>& nums)
    {
        if (!isTriangle(nums))
            return "none";
        if (nums[0] == nums[1] && nums[1] == nums[2])
            return "equilateral";
        if (nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2])
            return "isosceles";
        return "scalene";
    }
};
