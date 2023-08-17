/*
Given a number return the square root of that number with the given precision.
eg - sqrt(5) = 2.236 for precision = 3
*/
//* The max precision is 5

#include <bits/stdc++.h>
using namespace std;

int sqrtInt(int x)
{
    int lo = 1;
    int hi = x;
    int ans;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (mid == x / mid)
        {
            return mid;
        }
        else if (mid > x / mid)
        {
            hi = mid - 1;
        }
        else
        {
            ans = mid;
            lo = mid + 1;
        }
    }
    return ans;
}

double sqrtPres(int num, int pres)
{
    double ans = sqrtInt(num), factor = 1;
    for (double i = 0; i < pres; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j <= num; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int num, precision;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the precision: ";
    cin >> precision;
    cout << "The square root is : " << sqrtPres(num, precision);
    return 0;
}