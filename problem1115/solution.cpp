class FooBar
{
private:
    int n;
    std::mutex mutex;
    std::condition_variable cv;
    std::atomic<bool> isFooTurn;

public:
    FooBar(int n)
    {
        this->n = n;
        isFooTurn.store(true);
    }

    void foo(function<void()> printFoo)
    {
        std::unique_lock<std::mutex> lock(mutex);

        for (int i = 0; i < n; ++i)
        {
            cv.wait(lock, [this]()
            {
                return isFooTurn.load();
            });
        	printFoo();
            isFooTurn.store(false);
            cv.notify_all();
        }
    }

    void bar(function<void()> printBar)
    {
        std::unique_lock<std::mutex> lock(mutex);

        for (int i = 0; i < n; ++i)
        {
            cv.wait(lock, [this]()
            {
                return !isFooTurn.load();
            });
        	printBar();
            isFooTurn.store(true);
            cv.notify_all();
        }
    }
};
