#include <iostream>
#include <type_traits>
#include <typeinfo>

// Template function to display type traits of both T and the Argument
template <typename T>
void displayTypeTraits(const T& param) {
    std::cout << "T:\t" << typeid(T).name() << " const:" << std::is_const<std::remove_reference_t<T>>::value << " refernce:" << std::is_reference<T>::value << std::endl;
    std::cout << "param:\t" << typeid(param).name() <<  " const:" << std::is_const<std::remove_reference_t<decltype(param)>>::value << " refernce:" << std::is_reference<decltype(param)>::value << std::endl;
}

int main() {
    int x = 10;
    const int cx = x;
    const int& rx = x;


    // Function calls to display type traits
    std::cout << "For variable 'x':\n";
    displayTypeTraits(x);
    std::cout << "\nFor variable 'cx':\n";
    displayTypeTraits(cx);
    std::cout << "\nFor variable 'rx':\n";
    displayTypeTraits(rx);
    // std::cout << "\nFor rvalue 27:\n";
    // displayTypeTraits(27);

    return 0;
}
