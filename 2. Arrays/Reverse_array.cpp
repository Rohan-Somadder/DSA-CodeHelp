/*
Given an array reverse it.
*/

#include <bits/stdc++.h>
using namespace std;

void revArray(int arr[], int size)
{
    int st = 0, end = size - 1;
    while (st <= end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

int main()
{
    int n, arr[100];
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    revArray(arr, n);

    cout << "Array after reversal: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}