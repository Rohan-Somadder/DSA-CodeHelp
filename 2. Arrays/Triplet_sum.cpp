/*
You are given an array/list ARR consisting of N integers. Your task is to find
all the distinct triplets present in the array which adds up to a given number K.
An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K'
if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        // first sorted array is taken and then end points are fixed the loop will run till the
        // end points collide and then next iteration will be exceuted thus no extra loop
        // similar to as a binary search
        int sum = K - arr[i];
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if (arr[j] + arr[k] == sum)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                sort(temp.begin(), temp.end());
                s.insert(temp);
                j++;
            }
            else if (arr[j] + arr[k] < sum)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    // similar as : for val in s (Python)
    // inserting the set elements in the answer
    for (auto val : s)
    {
        ans.push_back(val);
    }
    return ans;
}

int main()
{
    vector<int> arr;
    int n, s;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Enter the sum: ";
    cin >> s;
    vector<vector<int>> ans = findTriplets(arr, n, s);
    cout << "The triplets are: ";
    if (ans.size() > 0)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "None";
    }

    return 0;
}