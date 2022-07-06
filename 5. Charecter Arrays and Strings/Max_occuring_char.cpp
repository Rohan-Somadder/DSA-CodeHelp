/*
Given a string str. The task is to find the maximum occurring
character in the string str. If more than one character occurs
the maximum number of time then print the lexicographically smaller character.
eg -
str = testsample
Output: e

str = output
Output: t
*/

#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
{
    int alpha[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        int index = 0;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            index = int(str[i] - 'a');
        }
        else
        {
            index = int(str[i] - 'A');
        }
        alpha[index]++;
    }
    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[max] < alpha[i])
        {
            max = i;
        }
    }
    return max + 'a';
}

int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;
    char ch = getMaxOccuringChar(str);
    cout << "The most occuring charecter is : " << ch << endl;
    return 0;
}