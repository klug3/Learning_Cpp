#include <iostream>
#include <string>

int main()
{
    double x;
    double y;
    std::string result;

    std::cout << "Enter two integer numbers x and y: ";
    std::cin >> x >> y;

    if (x > y)
    {
        result = "greater than";
    }
    else if (x < y)
    {
        result = "less than";
    }
    else
    {
        result = "equal";
    }

    std::cout << x << " is " << result << " " << y << std::endl;

    return 0;
}
