/*
You have been given a string 'STR' of words.
You need to replace all the spaces between words with “@40”.
*/

#include <bits/stdc++.h>
using namespace std;

string replaceSpacesInplace(string &str)
{
    // Without using extra memory
    string t = "@40";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.replace(i, 1, t);
        }
    }
    return str;
}

string replaceSpaces(string &str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{
    string s;
    cout << "Enter a string : ";
    getline(cin, s);
    cout << "Replaced string : ";
    cout << replaceSpacesInplace(s) << endl;
    return 0;
}