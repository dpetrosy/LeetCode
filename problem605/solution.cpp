class Solution
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        int size = flowerbed.size();

        for (int i = 0; i < size; i += 2)
        {
            if (i < size - 1 && flowerbed[i + 1] == 1)
                ++i;
            else if (flowerbed[i] == 0)
                --n;
        }
        return (n <= 0);
    }
};
