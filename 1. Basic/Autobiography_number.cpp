/*
An Autobiographical number is a number N such that the first digit of N
represents the count of how many zeroes are there in N, the second digit
represents the count of how many ones are there in N and so on.

You are given a function,
int FindAutoCount (char);

The function accepts string "n" which is a number and checks whether the number
is an autobiographical number or not. If it is an autobiographical number it returns an integer, ie. the count
of distinct numbers in "n". If it is not an autobiographical number it returns 0.

Assumption:
The input string will not be longer than 10 characters.
Input string will consist of numeric characters

Note:
If string is null return 0.
*/

#include <bits/stdc++.h>
using namespace std;

int countVars(int s[], int n, int c)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (c == s[i])
            count++;
    }
    return count;
}

int findAutoCount(int num[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int pos = 0;
    set<int> s;
    while (pos < n)
    {
        int x = countVars(num, n, pos);
        if (num[pos] == x)
        {
            s.insert(num[pos]);
        }
        else
        {
            break;
        }
        pos++;
    }
    return s.size();
}

int *create_arr_from_num(int &num)
{
    static int arr[20];
    int n = 0;
    while (num != 0)
    {
        arr[n++] = num % 10;
        num = num / 10;
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    num = n;
    return arr;
}

int main()
{
    string str;
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int *arr = create_arr_from_num(num);

    int ans = findAutoCount(arr, num);
    if (ans == 0)
    {
        cout << "Not an Autobiographical number." << endl;
    }
    else
    {
        cout << "Is an Autobiographical number." << endl;
    }
    return 0;
}