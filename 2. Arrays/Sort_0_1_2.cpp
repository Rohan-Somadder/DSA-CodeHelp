/*
You have been given an array/list ARR consisting of ‘N’ elements.
Each element in the array is either 0, 1 or 2.
Now, your task is to sort this array/list in increasing order.
For example, if ARR = [0, 2, 1, 1], then after sorting ARR must look like [0, 1, 1, 2].
*/

#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n)
{
    // Write your code here
    int left = 0, right = n - 1, mid = 0;
    while (mid <= right)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[left]);
            left++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[right]);
            right--;
        }
    }
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sortArray(arr, n);
    cout << "seperated form : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}