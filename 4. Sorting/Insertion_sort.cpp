/*
You are given ‘N’ integers in the form of an array ‘ARR’.
Print the sorted array using the insertion sort.
*/

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    // Insertion sort using for loop
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i]; // temp variable for storing the value as swapping erases it
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // swapping with the greater values
                arr[j + 1] = arr[j];
            }
            else
            {
                // breaking, no longer need to look in sorted part
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void insertion_Sort(int n, vector<int> &arr)
{
    // Insertion sort using while loop
    int i = 0, j, temp;
    while (i < n)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
            j--;
        }
        arr[j + 1] = temp;
        i++;
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
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    cout << "Array before sorting: ";
    print(arr, n);
    // insertionSort(n, arr);
    insertion_Sort(n, arr); // using the while loop
    cout << "Array after sorting: ";
    print(arr, n);
    return 0;
}