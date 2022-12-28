#include <iostream>

int main()
{
    int count;
    double num;
    double sum;
    char count_again = 'T';

    do
    {
        std::cout << "Enter the number of numbers you want to count the average of: ";
        std::cin >> count;

        if (count > 1)
        {
            // Reset sum so it won't stack from other runs
            sum = 0;

            for (size_t i = 0; i < count; i++)
            {
                std::cout << "Enter the number: ";
                std::cin >> num;
                sum += num;
            }

            // Return arithmetic mean
            std::cout << "Arithmetic mean of " << count << " numbers is " << sum / count << std::endl;
        }

        else if (count == 1)
        {
            std::cout << "Enter the number: ";
            std::cin >> num;
            std::cout << "Arithmetic mean of only one number is equal to this number!" << std::endl;
            std::cout << "In this case it's equal " << num << std::endl;
        }

        // When count is 0 or less
        else
        {
            std::cout << "The number of numbers must be greater than 0." << std::endl;
        }

        std::cout << "If you want to count the average again, press T ";
        std::cin >> count_again;

    } while (count_again == 'T');

    return 0;
}
