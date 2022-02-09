// Give the total number of set bits (1s) present in both a and b together.
#include <iostream>
using namespace std;

int numBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int total_bits = numBits(a) + numBits(b);
    cout << "Total bits = " << total_bits << endl;
    return 0;
}