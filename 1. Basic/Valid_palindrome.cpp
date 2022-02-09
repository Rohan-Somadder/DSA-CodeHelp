/*
A phrase is a palindrome if, after converting all uppercase letters into
lowercase letters and removing all non-alphanumeric characters, it reads
the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int right = s.length(), left = 0;
    while (left < right)
    {
        if (!isalpha(s[right]))
            right--;
        else if (!isalpha(s[left]))
            left++;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else
        {
            left++;
            right--;
        }
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    if (isPalindrome(s))
    {
        cout << "The string is palindrome!";
    }
    else
    {
        cout << "The string is not palindrome!";
    }
    return 0;
}