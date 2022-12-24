#include <iostream>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter three segments a, b and c: ";
    std::cin >> a >> b >> c;

    if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
    {
        std::cout << "From length segments " << a << " " << b << " " << c << " triangle could be build." << std::endl;
    }
    else
    {
        std::cout << "From length segments " << a << " " << b << " " << c << " triangle could not be build." << std::endl;
    }

    return 0;
}
