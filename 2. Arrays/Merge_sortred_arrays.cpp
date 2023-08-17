/*
You are given two integer arrays nums1 and nums2,
sorted in non-decreasing order, and two integers m and n,
representing the number of elements in nums1 and nums2 respectively.
Merge both the arrays into the first array.
*/

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
    // while(i>=0)
    // nums1[k--]=nums1[i--];

    while (j >= 0)
        nums1[k--] = nums2[j--];

    /*
    Alternate and easy approach -
    for (int i=m;i<m+n;i++)
        {
            nums1[i] = nums2[i-m];
        }
        sort(nums1.begin(),nums1.end());
    */
}

int main()
{
    vector<int> nums1, nums2;
    int n1, n2, x;
    cout << "Enter the size of first array: ";
    cin >> n1;
    cout << "Enter the size of second array: ";
    cin >> n2;
    cout << "Enter the first array: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        if (i < n1)
            cin >> x;
        else
            x = 0;
        nums1.push_back(x);
    }
    cout << "Enter the second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> x;
        nums2.push_back(x);
    }
    merge(nums1, n1, nums2, n2);
    cout << "Array after merge: "; 
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << nums1[i] << "  ";
    }
    return 0;
}