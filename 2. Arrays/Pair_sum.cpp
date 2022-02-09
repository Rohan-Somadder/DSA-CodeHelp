/*
You are given an integer array 'ARR' of size 'N' and an integer 'S'.
Your task is to return the list of all pairs of elements such that 
each sum of elements of each pair equals 'S'.

NOTE -->
Each pair should be sorted i.e the first value should be less than
or equals to the second value. 
Return the list of pairs sorted in non-decreasing order of their first value.
In case if two pairs have the same first value, the pair with a smaller 
second value should come first.
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int sum;
    cout << "Enter the sum: ";
    cin >> sum;
    cout << "Output : " << endl;
    vector<vector<int>> ans = pairSum(arr, sum);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}