#include <iostream>
#include <thread>
#include <vector>

void func(const std::vector<int>& v)
{
    for( auto i : v)
        std::cout << i << std::endl;
}

int main()
{
    std::vector<int> v{1,2,3,4,5};
    std::thread t1{func, std::move(v)};

    t1.join();
    return 0;
}