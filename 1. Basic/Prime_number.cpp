/*
Program to print if the input is prime or not.
*/

#include <iostream>
using namespace std;

void check_prime(int n)
{
    int i = 2;
    bool flag = true;
    while (i < n)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
        i++;
    }
    if (flag == true)
    {
        cout << "Its a prime number!";
    }
    else
    {
        cout << "Its a composite number!";
    }
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    check_prime(n);
    return 0;
}