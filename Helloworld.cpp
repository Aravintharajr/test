#include <iostream>
#include <type_traits>
#include <string>
#include <typeinfo>

// Template function to display type traits of a given argument
template <typename T>
void displayTypeTraits(const T& arg) {
    using ArgType = std::decay_t<decltype(arg)>;

    std::cout << "Type traits for the given argument:" << std::endl;

    // Determining the type using typeid
    std::cout << "- Actual type: " << typeid(ArgType).name() << std::endl;

    // Checking if the type is const
    std::cout << "- Is const: " << std::is_const<ArgType>::value << std::endl;

    // Checking if the type is volatile
    std::cout << "- Is volatile: " << std::is_volatile<ArgType>::value << std::endl;

    // Checking if the type is a reference
    std::cout << "- Is reference: " << std::is_reference<decltype(arg)>::value << std::endl;

    // Checking if the type is an lvalue reference
    std::cout << "- Is lvalue reference: " << std::is_lvalue_reference<decltype(arg)>::value << std::endl;

    // Checking if the type is an rvalue reference
    std::cout << "- Is rvalue reference: " << std::is_rvalue_reference<decltype(arg)>::value << std::endl;

    // Displaying the type as a string (basic type)
    if(std::is_integral<ArgType>::value)
        std::cout << "- Type: Integral type" << std::endl;
    else if(std::is_floating_point<ArgType>::value)
        std::cout << "- Type: Floating-point type" << std::endl;
    else if(std::is_pointer<ArgType>::value)
        std::cout << "- Type: Pointer type" << std::endl;
    else
        std::cout << "- Type: Unknown or complex type" << std::endl;
}

int main() {
    int a = 10;
    const int b = 20;
    const int &c = a;

    // Function calls to display type traits
    std::cout << "For variable 'int a = 10':\n";
    displayTypeTraits(a);
    std::cout << "\nFor variable 'const int b = 20':\n";
    displayTypeTraits(b);
    std::cout << "\nFor variable 'const int &c = a':\n";
    displayTypeTraits(c);

    return 0;
}
