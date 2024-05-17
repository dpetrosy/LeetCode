class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if (magazine.length() < ransomNote.length())
            return false;

        std::unordered_map<char, int> hashMap;
        for (char c : magazine)
            hashMap[c] += 1;
        
        for (char c : ransomNote)
        {
            hashMap[c] -= 1;
            if (hashMap[c] < 0)
                return false;
        }
        return true;
    }
};
