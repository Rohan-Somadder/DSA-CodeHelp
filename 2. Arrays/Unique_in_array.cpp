/*
Given an array find the unique element present in the array.
*/

#include <bits/stdc++.h>
using namespace std;

// Optimized solution O(n)
void findUnique(int a[], int size)
{
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        c = c ^ a[i];
    }
    cout << "Unique element is " << c;
}

int main()
{
    int arr[100], n;

    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //unique(arr,n);
    findUnique(arr, n);

    return 0;
}

/*
int countNum(int a[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == target)
            count++;
    }
    return count;
}

void unique(int a[],int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if (countNum(a, size, a[i]) == 1)
        {
            cout << "Unique element is " << a[i];
            flag = true;
        }
    }

    if (flag == false)
    {
        cout << "No unique element is present in the array";
    }
}
*/