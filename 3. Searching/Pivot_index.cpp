/*
Pivot element is the element which is the smallest in the rotated and sorted array
For eg - arr = {7,9,1,2,3}
here the pivot element is 1 and is at index 2
*/

#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (nums[mid] >= nums[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    vector<int> nums;
    int n, x;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    int pind = pivotIndex(nums);
    cout << "The pivot index is : " << pind << endl;

    return 0;
}