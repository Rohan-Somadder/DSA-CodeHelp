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
void pattern9();
void pattern10();
void pattern11();
void pattern12();
void pattern13();
void pattern14();
void pattern15();

int main()
{
    pattern15();
    return 0;
}

void pattern15()
{
    /*
    pattern - 
       *
      **
     ***
    ****
    */
    // Can also be done using different inner loops for spaces and stars
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
                cout << "* ";
            }
            j--;
        }
        cout << endl;
        i++;
    }
}

void pattern14()
{
    /*
    pattern - 
    D
    C D
    B C D
    A B C D
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        char c = 'A' + n - i;
        while (j <= i)
        {
            cout << c << " ";
            j++;
            c++;
        }
        cout << endl;
        i++;
    }
}

void pattern13()
{
    /*
    pattern - 
    A 
    B C
    D E F
    G H I J
    */
    int i = 1, j, n;
    char ch = 'A';
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern12()
{
    /*
    pattern - 
    A 
    B C
    C D E 
    D E F G 
    */
    // can also be done using -> char ch = 'A'; then setting it next char for every loop
    // and incrementing it every inner loop
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << char('A' + i + j - 2) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern11()
{
    /*
    pattern - 
    A 
    B B 
    C C C
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << char('A' + i - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern10()
{
    /*
    pattern - 
    A B C
    B C D
    C D E
    */
    int i = 1, j, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << char('A' + i + j - 2) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // Alternate option -
    /*
    int i = 1, j, n;
    cin >> n;
    while(i <= n)
    {
        j = 1;
        char ch = 'A' + i - 1;
        while(j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    */
}

void pattern9()
{
    /*
    pattern - 
    A B C
    D E F
    G H I
    */
    int i, j, n;
    cout << "Enter a number: ";
    cin >> n;
    char ch = 'A';
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern8()
{
    /*
    pattern - 
    A B C
    A B C
    A B C
    */
    int i, j, n;
    cout << "Enter a number: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << char('A' + j - 1) << " ";
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
    2 3
    3 4 5
    4 5 6 7
    */
    int i, j, n;
    cout << "Enter a number: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << (i + j - 1) << " ";
            j++;
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
    int i, j, n, val = 1;
    cout << "Enter a number: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << val << " ";
            val++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern5()
{
    /*
    pattern - 
    1
    2 1
    3 2 1
    4 3 2 1
    */
    int i, j, n;
    cout << "Enter a number: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << (i - j + 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    // Alternate option -
    /*
    while (i <= n)
    {
        j = i;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    */
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
    int i, j, n;
    cout << "Enter a number: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern3()
{
    /*
    pattern - 
    *
    * *
    * * *
    * * * *
    */
    int i, j, n;
    cout << "Enter a number: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << "* ";
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
    9  8  7
    6  5  4
    3  2  1
    */
    int i = 1, n;
    cout << "Enter a number: ";
    cin >> n;
    int val = n * n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << val << "  ";
            val--;
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
    1  2  3
    4  5  6
    7  8  9
    */
    int i = 1, n, val = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << val << "  ";
            val++;
            j++;
        }
        cout << endl;
        i++;
    }
}