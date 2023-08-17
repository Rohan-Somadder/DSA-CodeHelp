/*
Given two strings s and part, perform the following operation
on s until all occurrences of the substring part are removed:

Find the leftmost occurrence of the substring part and remove it from s.

Return s after removing all occurrences of part.
*/

#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s, p;
    cout << "Enter a string : ";
    getline(cin, s);
    cout << "Enter string to be removed : ";
    getline(cin, p);
    cout << "String after removing all occurrences : " << removeOccurrences(s, p) << endl;
    return 0;
}