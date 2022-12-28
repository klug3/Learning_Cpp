#include <iostream>
#include <string>

int main()
{
    std::string number;

    std::cout << "Enter number: ";
    std::cin >> number;

    std::cout << "Reversed number: ";

    for (size_t i = number.length(); i > 0; i--)
    {
        std::cout << number[i - 1];
    }

    return 0;
}
