class Solution
{
public:
    string capitalizeTitle(string title)
    {
        int titleIndex = 0;
        int wordLen = 0;

        title += ' ';
        int len = title.length();
        for (int i = 0; i < len; ++i)
        {
            title[i] = tolower(title[i]);
            if (title[i] == ' ')
            {
                if (wordLen >= 3)
                    title[titleIndex] = toupper(title[titleIndex]);
                titleIndex = i + 1;
                wordLen = 0;
            }
            else
                ++wordLen;
        }
        title.pop_back();
        return title;
    }
};
