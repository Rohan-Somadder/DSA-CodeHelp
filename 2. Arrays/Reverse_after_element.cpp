/*
Given an array/list 'ARR' of integers and a position ‘M’.
You have to reverse the array after that position.
*/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int l = m + 1, r = arr.size() - 1;
    while (l <= r)
    {
        swap(arr[l++], arr[r--]);
    }
}

int main()
{
    vector<int> nums;
    int n, x;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cout << "Enter the starting index: ";
    cin >> x;
    reverseArray(nums, x);
    cout << "Result Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}