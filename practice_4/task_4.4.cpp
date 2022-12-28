#include <iostream>

int main()
{
    int number;
    int div;
    int mod;
    int len = 1;
    int sum = 0;
    int count = 10;

    std::cout << "Enter number ";
    std::cin >> number;

    mod = number % 10;
    div = number / 10;

    // Determine amount of digits
    while (true)
    {
        if (div == 0)
        {
            len = 1;
            break;
        }
        else if (div < 10)
        {
            len += 1;
            sum += div;
            sum += mod;
            break;
        }
        else
        {
            len += 1;
            sum += mod;
            mod = div % 10;
            div = div / 10;
        }
    }

    // Print results
    if (len < 2)
    {
        std::cout << "The given number has 1 digit." << std::endl;
    }
    else
    {
        std::cout << "The given number has " << len << " digits and the sum of them is " << sum << std::endl;
    }

    return 0;
}
