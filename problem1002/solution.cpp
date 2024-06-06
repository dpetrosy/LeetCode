class Solution
{
public:
    vector<string> commonChars(vector<string>& words)
    {
        unordered_map<char, int> commonChars;
        unordered_map<char, int> currentChars;

        for (auto c : words[0])
            commonChars[c]++;

        for (int i = 1; i < words.size(); ++i)
        {
            currentChars.clear();
            for (auto c : words[i])
                currentChars[c]++;

            for (auto [c, count] : commonChars)
                commonChars[c] = min(commonChars[c], currentChars[c]);
        }

        vector<string> vec;
        for (auto [c, count] : commonChars)
        {
            for (int i = 0; i < count; ++i)
                vec.emplace_back(string(1, c));
        }
        return vec;
    }
};
