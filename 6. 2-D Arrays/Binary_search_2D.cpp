/*
Write an efficient algorithm that searches for a value target
in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

matrix -
1    3   5     7
10  11   16   20
23  30   34   60
*/

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int ele = matrix[mid / col][mid % col];

        if (ele == target)
        {
            return true;
        }
        else if (ele < target)
        {
            start = mid + 1;
        }
        else // if(ele > target)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
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