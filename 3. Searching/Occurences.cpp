/*
Find the first(left most) and last(rigth most) occurence of an
integer and return -1 if that doesn't exist.
*/

#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> n, int key)
{
    int l = 0, r = n.size() - 1, ans = -1;
    int mid = l + (r - l) / 2;
    while (l <= r)
    {
        if (n[mid] == key)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (n[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        mid = l + (r - l) / 2;
    }
    return ans;
}

int lastOcc(vector<int> n, int key)
{
    int l = 0, r = n.size() - 1, ans = -1;
    int mid = l + (r - l) / 2;
    while (l <= r)
    {
        if (n[mid] == key)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (n[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        mid = l + (r - l) / 2;
    }
    return ans;
}

int numOfOcc(vector<int> arr, int key)
{
    int total_occ = lastOcc(arr, key) - firstOcc(arr, key) + 1;
    return total_occ;
}

int main()
{
    vector<int> nums;
    int n, x;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cout << "Enter the element: ";
    cin >> x;
    cout << "First occurence : " << firstOcc(nums, x) << endl;
    cout << "Last occurence : " << lastOcc(nums, x) << endl;
    cout << "Total occurences : " << numOfOcc(nums, x) << endl;
    return 0;
}