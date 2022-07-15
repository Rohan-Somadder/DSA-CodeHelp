/*
Given a very large number (say 200) give the factorial of it
in form of mod m (where m = 10^9+7)
*/

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int m = pow(10, 9) + 7;
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = (fact * i) % m;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The factorial mod 10^9+7 is : " << fact(n) << endl;
    return 0;
}