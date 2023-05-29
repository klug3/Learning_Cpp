#include "task_2.cpp"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> S1 = {"abc", "bca", "dbe"};
    vector<string> S2 = {"zzzz", "ferz", "zdsr", "fgtd"};
    vector<string> S3 = {"gr", "sd", "rg"};
    vector<string> S4 = {"bdafg", "ceagi"};

    cout << "Rozwiązanie dla {'abc', 'bca', 'dbe'}: ";
    for (int i : solution(S1))
    {
        std::cout << i << ' ';
    }
    cout << endl;

    cout << "Rozwiązanie dla {'zzzz', 'ferz', 'zdsr', 'fgtd'}: ";
    for (int i : solution(S2))
    {
        std::cout << i << ' ';
    }
    cout << endl;

    cout << "Rozwiązanie dla {'gr', 'sd', 'rg'}: ";
    for (int i : solution(S3))
    {
        std::cout << i << ' ';
    }
    cout << endl;

    cout << "Rozwiązanie dla {'bdafg', 'ceagi'}: ";
    for (int i : solution(S4))
    {
        std::cout << i << ' ';
    }
    cout << endl;

    return 0;
}