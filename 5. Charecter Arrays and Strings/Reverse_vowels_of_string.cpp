/*
Given a string s, reverse only all the
vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u',
and they can appear in both cases.
*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        return true;
    }
    return false;
}

string reverseVowels(string s)
{
    int l = 0, r = s.length() - 1;
    while (l <= r)
    {
        if (isVowel(s[l]) && isVowel(s[r]))
        {
            swap(s[l], s[r]);
            l++;
            r--;
            continue;
        }
        else if (isVowel(s[l]))
        {
            r--;
            continue;
        }
        else if (isVowel(s[r]))
        {
            l++;
            continue;
        }
        l++;
        r--;
    }
    return s;
}

int main()
{
    string s, ans;
    cout << "Enter a string : ";
    getline(cin, s);
    ans = reverseVowels(s);
    cout << "String after reversal of vowels : " << ans << endl;
    return 0;
}