#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a charecter: ";
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