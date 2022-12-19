#include <iostream>

int main()
{
    int num;

    std::cout << "Enter an integer number: ";
    std::cin >> num;

    if ((num % 2) == 0)
    {
        std::cout << num << " is even number" << std::endl;
    }
    else
    {
        std::cout << num << " is odd number" << std::endl;
    }

    return 0;
}
