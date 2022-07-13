/*
For a given two-dimensional integer array/list ‘ARR’
of size (N x M), print the ‘ARR’ in a sine wave order,
i.e., print the first column top to bottom, next column bottom to top, and so on.

The sine wave for the matrix:-
1 2 3
4 5 6
will be [1, 4, 5, 2, 3, 6].
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int col = 0; col < mCols; col++)
    {
        if (col % 2 == 0)
        {
            // Top to bottom
            for (int row = 0; row < nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // Bottom to top
            for (int row = nRows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
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
    ans = wavePrint(arr, r, c);
    cout << "Wave form : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }
    return 0;
}