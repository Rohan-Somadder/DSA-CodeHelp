/*
Program to print the sum of all even numbers in the given input range.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << "Sum = " << sum;
    return 0;
}