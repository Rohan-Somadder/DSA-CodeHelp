/*
Given a non-negative integer x, compute and return the square root of x.
Since the return type is an integer, the decimal digits are truncated,
and only the integer part of the result is returned.
*/

#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
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
        else if (mid < x / mid)
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The square root is : " << mySqrt(num) << endl;
    return 0;
}