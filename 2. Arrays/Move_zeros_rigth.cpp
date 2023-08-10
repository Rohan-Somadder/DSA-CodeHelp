/*
Given an integer array nums, move all 0's to the end of it while
maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
*/

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int non_zero = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
            // Alternate way so that the below loop will not be required
            // swap(nums[i],nums[non_zero++]);
            nums[non_zero++] = nums[i];
    }
    for (int i = non_zero; i < nums.size(); i++)
        nums[i] = 0;
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
    moveZeroes(nums);
    cout<<"Array after shifting zeroes to right : ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << "  ";
    return 0;
}