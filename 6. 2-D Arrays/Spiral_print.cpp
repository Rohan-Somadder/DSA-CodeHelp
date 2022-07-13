/*
Given an m x n matrix, return all elements of the matrix in spiral order.
Input -
1 > 2 > 3
        v
4 > 5   6
^       v
7 < 8 < 9

Output -
1 2 3 6 9 8 7 4 5
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row * col;

    // init the indexes
    int startRow = 0;
    int startCol = 0;
    int endRow = row - 1;
    int endCol = col - 1;

    while (count < total)
    {
        // print staring row
        for (int i = startCol; count < total && i <= endCol; i++)
        {
            ans.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;

        // print ending col
        for (int i = startRow; count < total && i <= endRow; i++)
        {
            ans.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;

        // print ending row
        for (int i = endCol; count < total && i >= startCol; i--)
        {
            ans.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;
        // print starting col
        for (int i = endRow; count < total && i >= startRow; i--)
        {
            ans.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}

void printArray(vector<vector<int>> arr, int r, int c)
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
    vector<vector<int>> arr;
    vector<int> ans, temp;
    int r, c, val;
    cout << "Enter the number of rows and cols : ";
    cin >> r >> c;
    cout << "Enter the array : ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> val;
            temp.push_back(val);
        }
        arr.push_back(temp);
        temp.clear();
    }
    printArray(arr, r, c);
    ans = spiralOrder(arr);
    cout << "Spiral form : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }
    return 0;
}