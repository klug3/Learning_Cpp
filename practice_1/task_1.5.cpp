#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setfill(' ') << std::setw(7) << ""
              << "*" << std::setfill(' ') << std::setw(7) << "" << std::endl;

    std::cout << std::setfill(' ') << std::right << std::setw(7) << " * "
              << "*" << std::setfill(' ') << std::left << std::setw(7) << " * " << std::endl;

    std::cout << std::setfill(' ') << std::right << std::setw(7) << " * * "
              << "*" << std::setfill(' ') << std::left << std::setw(7) << " * * " << std::endl;

    std::cout << std::setfill(' ') << std::right << std::setw(7) << " * * * "
              << "*" << std::setfill(' ') << std::left << std::setw(7) << " * * * " << std::endl;
    return 0;
}
