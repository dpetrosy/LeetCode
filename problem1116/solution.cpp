class ZeroEvenOdd
{
private:
    int n;
    std::binary_semaphore zeroSem;
    std::binary_semaphore evenSem;
    std::binary_semaphore oddSem;

public:
    ZeroEvenOdd(int n) : zeroSem(1), evenSem(0), oddSem(0)
    {
        this->n = n;
    }

    void zero(function<void(int)> printNumber)
    {
        for (int num = 1; num <= n; ++num)
        {
            zeroSem.acquire();
            printNumber(0);
            if (num % 2 == 0)
                evenSem.release();
            else
                oddSem.release();
        }
    }

    void even(function<void(int)> printNumber)
    {
        for (int num = 2; num <= n; num += 2)
        {
            evenSem.acquire();
            printNumber(num);
            zeroSem.release();
        }
    }

    void odd(function<void(int)> printNumber)
    {
        for (int num = 1; num <= n; num += 2)
        {
            oddSem.acquire();
            printNumber(num);
            zeroSem.release();
        }
    }
};
