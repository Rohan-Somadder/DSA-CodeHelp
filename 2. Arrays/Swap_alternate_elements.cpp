#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{

    int first = 0, second = 1;
    while (second < size)
    {
        swap(arr[first], arr[second]);
        first += 2;
        second += 2;
    }

    /*
    also be done as -
    for (int i = 0; i < size - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    */
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
    swapAlternate(arr, n);
    cout << "Array after reversal: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}