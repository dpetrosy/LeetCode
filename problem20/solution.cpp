class Solution
{
public:
    bool isSameBrackets(char b1, char b2)
    {
        return ((b1 == '(' && b2 == ')') || (b1 == '[' && b2 == ']') ||
                (b1 == '{' && b2 == '}'));
    }

    bool isValid(string s)
    {
        std::stack<char> stack;

        for(char symbol : s)
        {
            if (!stack.empty() && isSameBrackets(stack.top(), symbol))
                stack.pop();
            else if (symbol == ']' || symbol == ')' || symbol == '}')
                return false;
            else
                stack.push(symbol);
        }

        if (stack.empty())
            return true;
        else
            return false;
    }
};
