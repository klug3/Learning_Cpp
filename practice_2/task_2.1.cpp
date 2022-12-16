#include <iostream>

int main()
{
    double num1;
    char op;
    double num2;
    double result;

    std::cout << "Enter math operation to calculate: ";
    std::cin >> num1 >> op >> num2;

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }

    else
    {
        std::cout << "Incorrect mathematical operation!" << std::endl;
    }

    std::cout << "Result is: " << result << std::endl;

    return 0;
}
