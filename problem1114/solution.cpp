class Foo
{
public:
    std::mutex mutex;
    std::condition_variable cv;
    bool isFirstPrinted = false;
    bool isSecondPrinted = false;

    Foo()
    {
    }

    void first(function<void()> printFirst)
    {
        printFirst();
        isFirstPrinted = true;
        cv.notify_all();
    }

    void second(function<void()> printSecond)
    {
        std::unique_lock<std::mutex> lock(mutex);
        cv.wait(lock, [&]()
        {
            return isFirstPrinted == true;
        });
        printSecond();
        isSecondPrinted = true;
        cv.notify_all();
    }

    void third(function<void()> printThird)
    {
        std::unique_lock<std::mutex> lock(mutex);
        cv.wait(lock, [&]()
        {
            return isSecondPrinted == true;
        });
        printThird();
    }
};
