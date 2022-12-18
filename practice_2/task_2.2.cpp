#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main()
{
    double r;

    std::cout << "Enter circle radius: ";
    std::cin >> r;
    std::cout << "Area of a circle with radius of " << r << " is: " << M_PI * pow(r, 2) << std::endl;

    return 0;
}
