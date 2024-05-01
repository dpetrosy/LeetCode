class Solution
{
public:
    int convertTime(string current, string correct)
    {
        int currentTime = stoi(current.substr(0, 2)) * 60;
        currentTime += stoi(current.substr(3, 2));
        int correctTime = stoi(correct.substr(0, 2)) * 60;
        correctTime += stoi(correct.substr(3, 2));
        int diff = correctTime - currentTime;

        int stepsCount = diff / 60;
        diff %= 60;
        stepsCount += diff / 15;
        diff %= 15;
        stepsCount += diff / 5;
        diff %= 5;
        return stepsCount + diff;
    }
};
