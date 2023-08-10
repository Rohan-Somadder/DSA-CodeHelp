/*
Given an array of integers arr, return true if the
number of occurrences of each value in the array is unique,
or false otherwise.
*/

#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    vector<int> occurrence;
    sort(arr.begin(), arr.end());
    int digit = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != digit)
        {
            // Counting the number of occurrences
            int num = count(arr.begin(), arr.end(), arr[i]);
            occurrence.push_back(num);
            digit = arr[i];
        }
    }

    for (int i = 0; i < occurrence.size(); i++)
    {
        int n = count(occurrence.begin(), occurrence.end(), occurrence[i]);
        //checking for multiple same number of occurrences
        if (n > 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    vector<int> arr;
    cout << "Enter the size: ";
    cin >> n;
    cout<<"Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    if (uniqueOccurrences(arr))
    {
        cout << "All the elements have occurred unique times.";
    }
    else
    {
        cout << "Some elements have occurred same times.";
    }
    return 0;
}