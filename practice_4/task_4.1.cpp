#include <iostream>
#include <cmath>

int main()
{
    int count = 17;
    for (size_t i = 0; i < count; i++)
    {
        std::cout << "2 to the power of " << i << " is " << pow(2, i) << std::endl;
    }

    return 0;
}
