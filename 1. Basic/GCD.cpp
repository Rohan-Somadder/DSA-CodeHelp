/*
Returns the gcd of two numbers given by input.
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "The GCD of them both : " << gcd(a, b) << endl;
    return 0;
}