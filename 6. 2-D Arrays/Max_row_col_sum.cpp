/*
Get the max row or column sum of the given array.
*/

#include <bits/stdc++.h>
using namespace std;

int maxRow(int arr[][10], int r, int c)
{
    int rmax = INT_MIN;
    int rnum = -1;
    for (int i = 0; i < r; i++)
    {
        int rsum = 0;
        for (int j = 0; j < c; j++)
        {
            rsum += arr[i][j];
        }
        if (rsum > rmax)
        {
            rmax = rsum;
            rnum = i;
        }
    }
    cout << "Maximum row sum is : " << rmax << endl;
    return rnum;
}

int maxCol(int arr[][10], int r, int c)
{
    int cmax = INT_MIN;
    int cnum = -1;
    for (int i = 0; i < c; i++)
    {
        int csum = 0;
        for (int j = 0; j < r; j++)
        {
            csum += arr[j][i];
        }
        if (csum > cmax)
        {
            cmax = csum;
            cnum = i;
        }
    }
    cout << "Maximum col sum is : " << cmax << endl;
    return cnum;
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

int main()
{
    int r, c;
    int arr[10][10];
    cout << "Enter the number of rows and cols (max 10): ";
    cin >> r >> c;
    cout << "Enter the array : ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArray(arr, r, c);
    int maxrow, maxcol;
    maxrow = maxRow(arr, r, c);
    cout << "Row with max sum is : " << maxrow << endl
         << endl;
    maxcol = maxCol(arr, r, c);
    cout << "Col with max sum is : " << maxcol << endl
         << endl;
    return 0;
}