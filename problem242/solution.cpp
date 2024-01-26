class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        std::unordered_map<int, int> hashMap;
        for (int i : s)
            hashMap[i] += 1;

        for (int i : t)
        {
            hashMap[i] -= 1;
            if (hashMap[i] < 0)
                return false;
        }
        return true;
    }
};
