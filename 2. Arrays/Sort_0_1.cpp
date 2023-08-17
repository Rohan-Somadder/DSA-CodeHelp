/*
Array consists od 0s and 1s , separate them and keep the 0s at the left 
and the 1s at the right.
*/

#include <bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int size)
{
	int left = 0, right = size - 1;
	while (left < right)
	{
		while (arr[left] == 0)
			left++;
		while (arr[right] == 1)
			right--;
		if ((arr[left] == 1) && (arr[right] == 0) && (left < right))
		{
			swap(arr[left], arr[right]);
			left++;
			right--;
		}
	}
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[100], n;
	cout << "Enter the size: ";
	cin >> n;
	cout << "Enter the array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout<<"Array after sorting 0s and 1s : ";
	sortArray(arr, n);
	print(arr, n);
	return 0;
}