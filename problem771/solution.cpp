class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> hashSet;

        for (char c : jewels)
            hashSet.insert(c);

        int count = 0;
        for (char c : stones)
        {
            if (hashSet.find(c) != hashSet.end())
                ++count;
        }
        return count;
    }
};
