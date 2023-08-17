/*
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and
‘N’ - 1 at least once. There is a single integer value that is present in
the array twice. Your task is to find the duplicate integer value present
in the array.
*/

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    vector<int> arr;
    cout << "Enter the array: ";
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    int ans = findDuplicate(arr);
    cout << "The duplicate element is: " << ans;
    return 0;
}