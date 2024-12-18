#include <iostream>
#include <thread>

void function_x(int x)
{
    std::cout << "Value : " << x << std::endl;
}

void function_y(int x, int y)
{
    std::cout << "Value X : " << x << std::endl;
    std::cout << "Value Y : " << y << std::endl;
}

int main()
{
    std::thread tx(function_x, 20);
    std::thread ty(function_y, 30,40);

    tx.join();
    ty.join();

    return 0;
}