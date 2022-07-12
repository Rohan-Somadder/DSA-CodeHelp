/*
You are given a string s consisting of lowercase English letters.
A duplicate removal consists of choosing two adjacent and equal
letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made.
It can be proven that the answer is unique.
*/

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    int i = 0;
    while (i < s.length() - 1)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 2);
            i = i - 2 > 0 ? i - 2 : 0;
            if (s.length() == 0)
                return "";
            continue;
        }
        i++;
    }
    return s;
}

int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;
    cout << "String after removing duplicates : " << removeDuplicates(s) << endl;
    return 0;
}