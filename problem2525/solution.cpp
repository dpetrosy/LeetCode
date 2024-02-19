class Solution
{
public:
    string categorizeBox(int length, int width, int height, int mass)
    {
        long volume = (long)length * width * height;
        string category;

        if (length >= 1e4 || width >= 1e4 || height >= 1e4 || volume >= 1e9)
            category = "Bulky";
        if (category == "Bulky" && mass >= 100)
            return "Both";
        if (mass >= 100)
            return "Heavy";
        if (category.empty())
            return "Neither";
        return category;
    }
};
