#include <iostream>

int main()
{
    int p;
    int q;
    bool first_law;
    bool second_law;

    // Get input
    std::cout << "Enter p and q: ";
    std::cin >> p >> q;

    // Evaluate De Morgan's laws
    first_law = (!(p && q) == (!p || !q));
    second_law = (!(p || q) == (!p && !q));

    // Print results
    std::cout << "1st De Morgan's law for p=" << p << " and q=" << q << ": " << first_law << std::endl;
    std::cout << "2nd De Morgan's law for p=" << p << " and q=" << q << ": " << second_law << std::endl;
    return 0;
}
