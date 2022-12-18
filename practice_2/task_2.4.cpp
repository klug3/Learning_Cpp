#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double alpha_deg;
    double alpha_rad;
    double cos_alpha;
    double sin_alpha;

    // Gather data
    std::cout << "Enter a value of angle in degrees: ";
    std::cin >> alpha_deg;

    // Calculate radians from degrees
    alpha_rad = alpha_deg * M_PI / 180;

    // Calculate sin and cos
    sin_alpha = sin(alpha_rad);
    cos_alpha = cos(alpha_rad);

    // Raport results
    std::cout << "Sine of " << std::setprecision(3) << alpha_deg << " degrees is: " << sin_alpha << std::endl;
    std::cout << "Cosine of " << std::setprecision(3) << alpha_deg << " degrees is: " << cos_alpha << std::endl;

    return 0;
}
