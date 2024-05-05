class Solution
{
public:
    string bestHand(vector<int>& ranks, vector<char>& suits)
    {
        std::unordered_set<int> suitsHashSet(suits.begin(), suits.end());
        if (suitsHashSet.size() == 1)
            return "Flush";

        std::unordered_map<int, int> ranksHashMap;
        for (int rank : ranks)
            ranksHashMap[rank] += 1;

        std::string retStr = "High Card";
        for (const auto& [key, value] : ranksHashMap)
        {
            if (value >= 3)
                return "Three of a Kind";
            if (value >= 2)
                retStr = "Pair";
        }
        return retStr;
    }
};
