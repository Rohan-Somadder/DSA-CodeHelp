/*
Write an efficient algorithm that searches for a value
target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

matrix -
1   4   7  11  15
2   5   8  12  19
3   6   9  16  22
10 13  14  17  24
18 21  23  26  30
*/

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0)
    {
        int ele = matrix[rowIndex][colIndex];

        if (ele == target)
        {
            return true;
        }
        if (ele > target)
        {
            colIndex--;
        }
        else
        {
            rowIndex++;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> arr;
    vector<int> temp;
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
    cout << "Enter the element to search : ";
    cin >> val;
    if (searchMatrix(arr, val))
    {
        cout << "The element is present in the array";
    }
    else
    {
        cout << "The element is not in the array";
    }
    return 0;
}