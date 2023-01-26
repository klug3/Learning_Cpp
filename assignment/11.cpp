#include <iostream>
#include <cmath>

double non_recursive(int n)
{
    double H;
    H = pow(2, n) - 1;

    return H;
}

double recursive(int n)
{
    double H; // int can be too small for more levels ~> 14
    if (n == 0)
    {
        H = 0;
        return H;
    }
    else if (n > 0)
    {
        n -= 1;
        H = 2 * recursive(n) + 1;
    }
    else
    {
        std::cout << "Error occured, n < 0!" << std::endl;
        return 0;
    }
    return H;
}

int main()
{
    int levels;
    std::cout << "Welcome to Tower of Hanoi calculator!" << std::endl;
    std::cout << "Enter amount of levels: ";

    std::cin >> levels;

    // Handle wrong levels values
    if (!levels || levels < 0)
    {
        std::cout << "Number of levels must be an integer value greater than 0!" << std::endl;
    }

    else
    {
        // Print results
        std::cout << "Calculated minimal number of moves required to solve the puzzle is: " << std::endl;
        std::cout << non_recursive(levels) << " using non-recursive method;" << std::endl;
        std::cout << recursive(levels) << " using recursive method." << std::endl;
    }
    return 0;
}