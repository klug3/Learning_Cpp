#include <cmath>
#include <iostream>

int main()
{
    double a;

    std::cout << "Enter a length of square side a: ";
    std::cin >> a;
    std::cout << "A diagonal of a square with side length of " << a << " is " << a * sqrt(2);

    return 0;
}
