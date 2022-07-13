/*
Print the row and col sum for the given array.
*/

#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        int rsum = 0;
        for (int j = 0; j < c; j++)
        {
            rsum += arr[i][j];
        }
        cout << "row sum for " << i + 1 << "th row : " << rsum << endl;
    }
    cout << endl;
}

void printArray(int arr[][10], int r, int c)
{
    cout << "Your array is : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

void colSum(int arr[][10], int r, int c)
{
    for (int i = 0; i < c; i++)
    {
        int csum = 0;
        for (int j = 0; j < r; j++)
        {
            csum += arr[j][i];
        }
        cout << "col sum for " << i + 1 << "th row : " << csum << endl;
    }
    cout << endl;
}

int main()
{
    int r, c;
    int arr[10][10];
    cout << "Enter the number of rows and cols (max is 10): ";
    cin >> r >> c;
    cout << "Enter the array elements : ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArray(arr, r, c);
    rowSum(arr, r, c);
    colSum(arr, r, c);
    return 0;
}