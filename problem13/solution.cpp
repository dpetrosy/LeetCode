class Solution
{
public:
    int romanToInt(std::string s)
    {
        std::unordered_map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

        int num = 0;
        int len = s.length();
        for (int i = 0; i < len; ++i)
        {
            if (map[s[i]] < map[s[i + 1]])
                num -= map[s[i]];
            else
                num += map[s[i]];
        }
        return num;
    }
};
