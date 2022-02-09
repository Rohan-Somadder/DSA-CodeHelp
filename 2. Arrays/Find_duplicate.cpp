/*
Given an array of integers nums containing n + 1 integers where each
integer is in the range [1, n] inclusive. There is only one repeated
number in nums, return this repeated number. You must solve the problem
without modifying the array nums and uses only constant extra space.
*/

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    vector<int> arr = nums;
    int k;
    for (int i = 0; i < nums.size(); i++)
    {
        k = abs(arr[i]) - 1;
        if (arr[k] > 0)
        {
            arr[k] = -arr[k];
        }
        else
        {
            break;
        }
    }
    return k + 1;
}

int main()
{
    vector<int> arr;
    int n, x;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    int dup = findDuplicate(arr);
    cout << "The duplicate number is : " << dup << endl;
    return 0;
}