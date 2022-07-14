/*
You are given an n x n 2D matrix representing an image,
rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have
to modify the input 2D matrix directly. DO NOT allocate another
2D matrix and do the rotation.

1 2 3        7 4 1
4 5 6   =>   8 5 9
7 8 9        9 6 3
*/

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    // transposing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i > j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    // reversing the rows
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j < col / 2)
            {
                swap(matrix[i][j], matrix[i][col - j - 1]);
            }
        }
    }
}

void printArray(vector<vector<int>> arr, int n)
{
    cout << "The Array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr;
    vector<int> temp;
    int n, val;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            temp.push_back(val);
        }
        arr.push_back(temp);
        temp.clear();
    }
    printArray(arr, n);
    rotate(arr);
    printArray(arr, n);
    return 0;
}