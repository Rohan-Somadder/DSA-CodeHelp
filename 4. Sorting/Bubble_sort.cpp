/*
You are given an unsorted array consisting of N non-negative integers.
Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.
*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        // for case 1 to n-1
        bool swapped = false; // for optimisation
        for (int j = 0; j < n - i; j++)
        {
            // for element 0 to n-i in each iteration
            // as others are already in their correct order
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // if even once swapping occurs then the array is not sorted
                swapped = true;
            }
        }
        if (swapped == false)
            break;
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
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    cout << "Array before sorting: ";
    print(arr, n);
    bubbleSort(arr, n);
    cout << "Array after sorting: ";
    print(arr, n);
    return 0;
}