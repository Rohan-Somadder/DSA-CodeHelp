#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        s += arr[i];
    }
    return s;
}

int main()
{
    int n, arr[100];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of the array: " << sumArray(arr, n) << endl;
    return 0;
}