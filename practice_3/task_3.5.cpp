#include <iostream>
#include <cmath>
int main()
{
    double a;
    double b;
    double c;
    double delta;
    double x1;
    double x2;

    std::cout << "----- Quadric equation ax^2 + bx + c = 0 -----" << std::endl;
    std::cout << "Enter coefficients a b c: " << std::endl;
    std::cin >> a >> b >> c;

    // Exit if not quadric equation
    if (a == 0)
    {
        std::cout << "Coeffictient a must be other than 0!" << std::endl;
        return 0;
    }

    // Calculate delta
    delta = pow(b, 2) - (4 * a * c);

    // Exit if delta < 0
    if (delta < 0)
    {
        std::cout << "Delta is less than 0!" << std::endl;
        return 0;
    }

    // Calculate x1 and x2
    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);

    // Print out results
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;

    return 0;
}
