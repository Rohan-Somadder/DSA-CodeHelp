/*
Given a string, you need to reverse the order of characters
in each word within a sentence while still preserving whitespace
and initial word order.

Example -
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
*/

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string ans, word;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            word.push_back(s[i]);
        }
        if ((s[i] == ' ' && s[i + 1] != ' ') || i == s.length() - 1)
        {
            reverse(word.begin(), word.end());
            ans = ans + word + " ";
            word.clear();
        }
    }
    return ans;
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