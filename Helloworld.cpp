#include <iostream>
#include <type_traits>

template<typename T>
void func(const T& param)
{
    if(std::is_const<decltype(param)>())
        std::cout << "const ";
    std::cout << typeid(param).name() << std::endl;
}

int main()
{
    int x = 10;
    const int cx = x;
    const int &rx = cx;
    
    func(x);
    func(cx);
    func(rx);
    return 0;
}