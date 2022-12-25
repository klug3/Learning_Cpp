#include <iostream>

int main()
{
    int count;
    int num;
    int sum;
    double mean;

    std::cout << "Enter the number of numbers you want to count the average of: ";
    std::cin >> count;

    if (count < 1)
    {
        std::cout << "The number of numbers must be greater than 0!" << std::endl;
        return 0;
    }

    else if (count == 1)
    {
        std::cout << "Enter number: ";
        std::cin >> num;
        std::cout << "Arithmetic mean of one mumber is " << num << std::endl;
        return 0;
    }

    else
    {
        for (size_t i = 0; i < count; i++)
        {
            std::cout << "Enter number: ";
            std::cin >> num;
            sum += num;
        }

        // Calculate mean
        mean = sum / count;

        std::cout << "Arithmetic mean of " << count << " numbers is " << mean << std::endl;
    }

    return 0;
}
