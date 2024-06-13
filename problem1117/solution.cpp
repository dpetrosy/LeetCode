class H2O
{
private:
    std::atomic<int> hydrogenCount;
    std::binary_semaphore oxygenSem;
    std::counting_semaphore<2> hydrogenSem;

public:
    H2O() : hydrogenCount(0), oxygenSem(1), hydrogenSem(0)
    {}

    void hydrogen(function<void()> releaseHydrogen)
    {
        hydrogenSem.acquire();
        releaseHydrogen();
        hydrogenCount += 1;
        if (hydrogenCount == 2)
        {
            hydrogenCount = 0;
            oxygenSem.release();
        }
    }

    void oxygen(function<void()> releaseOxygen)
    {
        oxygenSem.acquire();
        releaseOxygen();
        hydrogenSem.release();
        hydrogenSem.release();
    }
};
