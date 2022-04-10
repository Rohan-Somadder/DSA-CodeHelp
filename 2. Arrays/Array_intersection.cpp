/*

You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively.
Both these arrays are sorted in non-decreasing order.
You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common
elements occurring in both arrays.

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while ((i < n) && (j < m))
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}
vector<int> input(vector<int> arr, int N)
{
    cout << "Enter the array :";
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    return arr;
}
int main()
{
    int n, m;
    cout << "Enter the value of n,m: ";
    cin >> n >> m;
    vector<int> arr1, arr2;
    arr1 = input(arr1, n);
    arr2 = input(arr2, m);
    vector<int> answer = findArrayIntersection(arr1, n, arr2, m);
    cout << "Intersection of arrays: ";
    if (answer.size() != 0)
    {
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }

    return 0;
}