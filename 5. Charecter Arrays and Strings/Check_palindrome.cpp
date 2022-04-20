/*
You are given a string 'S'. Your task is to check whether the string
is palindrome or not. For checking palindrome, consider alphabets and
numbers only and ignore the symbols and whitespaces.
*/

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    int i = 0, j = sizeof(s) / sizeof(s[0]) - 1;
    bool flag = true;
    while (i <= j)
    {
        if (tolower(s[i]) != tolower(s[j]) && iswalnum(s[i]) && iswalnum(s[j]))
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }
    return flag;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (checkPalindrome(s))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}