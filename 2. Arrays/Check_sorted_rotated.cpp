/*
Given an array nums, return true if the array was originally
sorted in non-decreasing order, then rotated some number of
positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B
of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.
*/

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int count = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
            count++;
    }
    return count <= 1;
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
    if (check(nums))
        cout << "Array is sorted and rotated";
    else
        cout << "Array is not sorted and rotated";
    return 0;
}