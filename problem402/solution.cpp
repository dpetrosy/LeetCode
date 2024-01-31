class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        std::stack<char> stack;
        std::string result = "";

        for (char c : num)
        {
            while (k && !stack.empty() && c < stack.top())
            {
                --k;
                stack.pop();
            }
            if (!stack.empty() || c != '0')
                stack.push(c);
        }

        while (k-- && !stack.empty())
            stack.pop();

        while (!stack.empty())
        {
            result += stack.top();
            stack.pop();
        }

        if (result == "")
            return "0";
        reverse(result.begin(), result.end());
        return result;
    }
};
