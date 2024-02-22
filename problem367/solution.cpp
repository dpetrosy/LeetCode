class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int right = num;
        int left = 1;
        long mid;

        while (left <= right)
        {
            mid = left + (right - left) / 2;

            if (mid * mid == num)
                return true;
            if (mid * mid < num)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
};
