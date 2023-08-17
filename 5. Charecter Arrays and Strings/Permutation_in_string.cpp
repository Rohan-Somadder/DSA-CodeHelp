/*
Given two strings s1 and s2, return true if s2
contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.
*/

#include <bits/stdc++.h>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    // counting for the array
    int count[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count[index]++;
    }
    // making a window for traversing s2
    int i = 0, windowSize = s1.length();
    int count2[26] = {0};
    // counting the window substring
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i++] - 'a';
        count2[index]++;
    }
    if (checkEqual(count, count2))
    {
        return true;
    }
    // now counting the rest of array
    while (i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
        if (checkEqual(count, count2))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s1, s2;
    cout << "Enter a string : ";
    cin >> s2;
    cout << "Enter string to check for permutations : ";
    cin >> s1;
    if (checkInclusion(s1, s2))
    {
        cout << "Permutations are present in the string" << endl;
    }
    else
    {
        cout << "Permutations not present in the string" << endl;
    }
    return 0;
}