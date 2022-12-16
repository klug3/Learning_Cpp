#include <iostream>
#include <string>

int main()
{
    std::string first_name;
    std::string last_name;
    int index_nr;
    std::string term;
    std::string field;

    std::cout << "Enter your first name, last name, index number, field of study and term: ";
    std::cin >> first_name >> last_name >> index_nr >> term >> field; // Get user input from the keyboard

    std::cout << "Hi " << first_name + " " + last_name << "! "
              << "Your index number is " << index_nr << ". "
              << "You are on " << term << " term on " + field << std::endl; // Display the input values
    return 0;
}
