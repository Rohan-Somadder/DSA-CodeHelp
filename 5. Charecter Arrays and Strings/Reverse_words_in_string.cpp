/*
Given an input string array, reverse the array word by word.
A word is defined as a sequence of non-space strings.
The input character array does not contain leading or
trailing spaces and the words are always separated by a single space.

Example 1 -
Input: s = "the sky is blue"
Output: "blue is sky the"

Example 2 -
Input: "a b c"
Output: "c b a"
*/

#include <bits/stdc++.h>
using namespace std;

string trim(string s)
{
    if (s[0] == ' ')
    {
        s.pop_back();
        reverse(s.begin(), s.end());
        s.pop_back();
        reverse(s.begin(), s.end());
    }
    else
    {
        s.pop_back();
    }
    return s;
}
string reverseWords(string s)
{
    string ans, word;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            word.push_back(s[i]);
        }
        if (i == 0 || (s[i] == ' ' && s[i - 1] != ' '))
        {
            reverse(word.begin(), word.end());
            ans = ans + word;
            ans.push_back(' ');
            word.clear();
        }
    }
    return trim(ans);
}

int main()
{
    string s, ans;
    cout << "Enter the string: ";
    getline(cin, s);
    ans = reverseWords(s);
    cout << "String after : " << ans;
    return 0;
}