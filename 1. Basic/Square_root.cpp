#include <iostream>
using namespace std;

int root(int n)
{
    int i;
    for (i = 1; i <= n / 2; i++)
    {
        if (i * i > n)
        {
            break;
        }
    }
    return i - 1;
}

int main()
{
    int num, sqrt;
    cout << "Enter the number: ";
    cin >> num;
    sqrt = root(num);
    cout << sqrt;
    return 0;
}