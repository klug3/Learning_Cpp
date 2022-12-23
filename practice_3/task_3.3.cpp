#include <iostream>

int main()
{
    double length;
    int unit;

    std::cout << "***** Lenght unit converter *****" << std::endl;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "What unit?\n 0-mm\n 1-cm\n 2-m" << std::endl;
    std::cin >> unit;

    if (unit == 0)
    {
        std::cout << length << " mm = " << length / 10 << " cm = " << length / 1000 << " m" << std::endl;
    }

    else if (unit == 1)
    {
        std::cout << length * 10 << " mm = " << length << " cm = " << length / 100 << " m" << std::endl;
    }

    else if (unit == 2)
    {
        std::cout << length * 1000 << " mm = " << length * 100 << " cm = " << length << " m" << std::endl;
    }

    else
    {
        std::cout << "Wrong unit selected." << std::endl;
    }

    return 0;
}
