#include <iostream>
#include <thread>

class Functor
{
public:
    void operator()(int x, int y) const
    {
        std::cout << "x : " << x << " y : " << y << std::endl;
    }
};

class Nec{
public:
    static void sprintn(int first, int last)
    {
        for (int i = first; i < last; i++)
            std::cout << i << std::endl;
        std::cout << std::endl;
    }

    void printn(int first, int last) const
    {
        for(int i = first; i < last; i++)
            std::cout << i << std::endl;
    }
};

int main()
{
    std::thread t1(Functor{}, 10, 20);
    t1.join();

    std::thread t2(Nec::sprintn, 20,30);
    t2.join();

    Nec myNec;
    std::thread t3(&Nec::printn, myNec, 31, 40);
    t3.join();
    return 0;
}
