class Solution
{
public:
    int mySqrt(int x)
    {
        int right = x;
        int left = 0;
        long mid = 0;

        while (left <= right)
        {
            mid = left + (right - left) / 2;

            if (mid * mid == x)
                return mid;
            if (mid * mid < x)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return right;
    }
};
