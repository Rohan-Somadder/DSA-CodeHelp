/*
Given an array, rotate the array to the right by k steps, where k is non-negative.
*/

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}

int main()
{
    vector<int> nums;
    int x, n;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cout << "Enter the value of K: ";
    cin >> x;
    rotate(nums, x);
    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << "  ";
    return 0;
}