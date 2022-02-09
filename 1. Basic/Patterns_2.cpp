#include <iostream>
using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();

int main()
{
    pattern8();
    return 0;
}

void pattern8()
{
    /*
    pattern - 
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n * 2)
        {
            if (j <= (n - i + 1))
            {
                cout << j << " ";
            }
            else if (j >= (n + i))
            {
                cout << (2 * n - j + 1) << " ";
            }
            else
            {
                cout << "* ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern7()
{
    /*
    pattern - 
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        // Printing spaces
        j = n - i;
        while (j >= 1)
        {
            cout << "  ";
            j--;
        }
        // First triangle
        j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        // Second triangle
        j = i - 1;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}

void pattern6()
{
    /*
    pattern - 
          1
        2 3
      4 5 6
    7 8 9 10
    */
    int i = 1, j, n, val = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = n;
        while (1 <= j)
        {
            if (j > i)
            {
                cout << "  ";
            }
            else
            {
                cout << val << " ";
                val++;
            }
            j--;
        }
        cout << endl;
        i++;
    }
}

void pattern5()
{
    /*
    pattern - 
    1 2 3 4
      2 3 4
        3 4
          4
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            if (j >= i)
            {
                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern4()
{
    /*
    pattern - 
          1
        2 2
      3 3 3
    4 4 4 4
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = n;
        while (j >= 1)
        {
            if (j > i)
            {
                cout << "  ";
            }
            else
            {
                cout << i << " ";
            }
            j--;
        }
        cout << endl;
        i++;
    }
}

void pattern3()
{
    /*
    pattern - 
    1 1 1 1
      2 2 2
        3 3
          4
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            if (j >= i)
            {
                cout << i << " ";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern2()
{
    /*
    pattern - 
    ****
     ***
      **
       *
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            if (i <= j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern1()
{
    /*
    pattern - 
    ****
    ***
    **
    *
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = n;
        while (j >= i)
        {
            cout << "* ";
            j--;
        }
        cout << endl;
        i++;
    }
}