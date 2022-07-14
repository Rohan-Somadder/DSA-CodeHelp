/*
You are given a three integers 'X', 'N', and 'M'.
Your task is to find ('X' ^ 'N') % 'M'. A ^ B is
defined as A raised to power B and A % C is the remainder
when A is divided by C.
*/

#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            // odd (n%2==0 can also be used)
            res = (1LL * (res) % m * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
    return res;
}

int main()
{
    int x, m, n;
    cout << "Enter the value of X, N, M : ";
    cin >> x >> n >> m;
    cout << "The value of (X ^ N) % M is " << modularExponentiation(x, n, m) << endl;
    return 0;
}