#include <iostream>

using std::cout;
using std::endl;
using std::string;

string rev_string(string &s)
{
    // Returns reversed version of the given string
    string rev(s.rbegin(), s.rend());
    return rev;
}

string solution(int N, int K)
{
    // Returns a palindrome of length N which consists of K distinct lower-case letters (a-z)
    string letters = "abcdefghijklmnopqrstuvwxyz"; // letters donor
    string beginning;                              // first part of the resulting palindrome
    string end;                                    // second part of the resulting palindrome
    char pivot;                                    // medium part of the resulting palindrome (if N is uneven)
    string result;                                 // resulting palindrome
    K -= 1;                                        // so "a" would also be included in the results

    // case when the palindrome length is an even value
    if ((N % 2) == 0)
    {
        for (int i = 0; i < (N / 2); i++)
        {
            beginning += letters[K];
            if (K > 0)
            {
                K -= 1;
            }
        }
        end = rev_string(beginning);
        result = beginning + end;
    }

    // case when the palindrome length is an UNeven value
    else
    {
        pivot = letters[K];
        if (K > 0)
        {
            K -= 1;
        }
        for (int i = 0; i < (N / 2); i++)
        {
            beginning += letters[K];
            if (K > 0)
            {
                K -= 1;
            }
        }
        end = rev_string(beginning);
        result = beginning + pivot + end;
    }

    return result;
}
