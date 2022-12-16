#include <iostream>

int main(int argc, char const *argv[])
{
    bool b = false; // Boolean can be true/false or 1/0 respectively
    int i = 69;
    float f = -4.2;
    char c = 'A';
    double d = 69.420;

    std::cout << "Boolean: " << b << "\t"
              << "\t"
              << "\t"
              << "Size: " << sizeof(b) << std::endl;
    std::cout << "Character: " << c << "\t"
              << "\t"
              << "\t"
              << "Size: " << sizeof(c) << std::endl;
    std::cout << "Integer: " << i << "\t"
              << "\t"
              << "\t"
              << "Size: " << sizeof(i) << std::endl;
    std::cout << "Floating point: " << f << "\t"
              << "\t"
              << "Size: " << sizeof(f) << std::endl;
    std::cout << "Double floating point: "
              << d << "\t"
              << "Size: " << sizeof(d) << std::endl;

    return 0;
}
