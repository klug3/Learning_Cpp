/*
You are given a string S consisting of N letters 'a' and/or 'b'. In one move, you can swap
one letter for the other ('a' for 'b' or 'b' for 'a').
Write a function solution that, given such a string S, returns the minimum number of moves
required to obtain a string containing no instances of three identical consecutive letters.
*/

#include <iostream>

using std::cout;
using std::endl;
using std::string;

int solution(string &S)
{
    int a_counter = 0;
    int b_counter = 0;
    int result = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'a')
        {
            a_counter += 1;
            b_counter = 0;
            if (a_counter == 3)
            {
                a_counter = 0;
                result += 1;
            }
        }
        else
        {
            b_counter += 1;
            a_counter = 0;
            if (b_counter == 3)
            {
                b_counter = 0;
                result += 1;
            }
        }
    }
    return result;
}