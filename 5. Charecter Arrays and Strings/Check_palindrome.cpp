/*
You are given a string 'S'. Your task is to check whether the string
is palindrome or not. For checking palindrome, consider alphabets and
numbers only and ignore the symbols and whitespaces.
*/
#include <bits/stdc++.h>
using namespace std;

bool isPossible(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return true;
    return false;
}

bool checkPalindrome(string s)
{
    int i = 0, j = s.length() - 1;
    bool flag = true;
    while (i <= j)
    {
        if (!isPossible(s[i]))
        {
            i++;
            continue;
        }
        if (!isPossible(s[j]))
        {
            j--;
            continue;
        }
        if (tolower(s[i]) != tolower(s[j]))
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
    getline(cin, s);
    if (checkPalindrome(s))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}