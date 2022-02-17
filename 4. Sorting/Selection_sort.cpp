/*
You are given an unsorted array consisting of N non-negative integers.
Your task is to sort the array in non-decreasing order using the Selection Sort algorithm.
*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    int minIndex = 0;
    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

void print(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr;
    int n, x;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    cout << "Array before sorting : ";
    print(arr, n);
    selectionSort(arr, n);
    cout << "Array after sorting : ";
    print(arr, n);
    return 0;
}