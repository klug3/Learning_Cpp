/*
You are given a string S consisting of N letters 'a' and/or 'b'. In one move, you can swap
one letter for the other ('a' for 'b' or 'b' for 'a').
Write a function solution that, given such a string S, returns the minimum number of moves
required to obtain a string containing no instances of three identical consecutive letters.
*/

#include <iostream>
#include <vector>

using std::string;
using std::vector;

vector<int> solution(vector<string> &S)
{
    int first_str;
    int second_str;
    int pos;

    for (int i = 0; i < (S.size() - 1); i++)
    {
        for (int j = i + 1; j < S.size(); j++)
        {
            for (int k = 0; k < S[i].length(); k++)
            {
                if (S[i][k] == S[j][k])
                {
                    first_str = i;
                    second_str = j;
                    pos = k;
                    return vector<int>{first_str, second_str, pos};
                }
            }
        }
    }
    return vector<int>{};
}
