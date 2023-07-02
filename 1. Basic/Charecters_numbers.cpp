/*
A Program which correctly deduces whether the input character is uppercase, lowercase or a number.
*/

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'a') && (ch <= 'z'))
    {
        cout << "Its Lower case!";
    }
    else if ((ch >= 'A') && (ch <= 'Z'))
    {
        cout << "Its Upper case";
    }
    else if ((ch >= '0') && (ch <= '9'))
    {
        cout << "Its a Number";
    }

    return 0;
}