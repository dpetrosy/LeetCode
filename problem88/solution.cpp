class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        for (int end = nums1.size() - 1; j >= 0; --end)
        {
            if (i >= 0 && nums1[i] > nums2[j])
                nums1[end] = nums1[i--];
            else
                nums1[end] = nums2[j--];
        }
    }
};
