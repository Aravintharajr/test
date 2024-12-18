#include <iostream>
#include <thread>

int main()
{
    auto fn{[] { std::cout << "Hello World" << std::endl;}};
    std::thread t{ fn };
    t.join();
}