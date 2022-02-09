#include <iostream>
using namespace std;

// Do a function to print nth tern in the series.

int nthTermFibbonacci(int n)
{
    // return the n th term
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        int i = 0, j = 1, f;
        n -= 2;
        for (; n >= 1; n--)
        {
            f = i + j;
            i = j;
            j = f;
        }
        return f;
    }
}

void fibonacci(int n)
{
    int i = 0, j = 1, f;
    cout << "Fibonacci Sequence: " << i << " " << j << " ";
    n -= 2;
    for (; n >= 1; n--)
    {
        f = i + j;
        cout << f << " ";
        i = j;
        j = f;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci(n);
    cout << "Nth term in the series: " << nthTermFibbonacci(n) << endl;
    return 0;
}