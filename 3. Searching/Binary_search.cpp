/*
Sample program for the execution of binary searching algorithm.
*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> num, int key)
{
    // creating a copy of array for sorting and searching
    // in case the array provided is not sorted.
    vector<int> arr = num;
    sort(arr.begin(), arr.end());
    int start = 0, end = num.size(), mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else if (arr[mid] > key)
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> nums;
    int n, x;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cout << "Enter the element to search: ";
    cin >> x;
    int index = binarySearch(nums, x);
    cout << "The index of the element in the array: " << index << endl;
    return 0;
}