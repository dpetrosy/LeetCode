class MinStack
{
public:
    MinStack() : i(0)
    {}

    void push(int val)
    {
        vec.push_back(make_pair(val, 0));
        if (i)
            val = min(val, vec[i - 1].second);

        vec[i].second = val;
        ++i;
    }

    void pop()
    {
        auto it = vec.begin();
        advance(it, i);
        vec.erase(it);
        --i;
    }

    int top()
    {
        return vec[i - 1].first;
    }

    int getMin()
    {
        return vec[i - 1].second;
    }

private:
    size_t i;
    std::vector<std::pair<int, int>> vec;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
