/*
Given an array/list of length ‘N’, where the array/list represents the boards
and each element of the given array/list represents the length of each board.
Some ‘K’ numbers of painters are available to paint these boards. Consider that
each unit of a board takes 1 unit of time to paint.
You are supposed to return the area of the minimum time to get this job done of
painting all the ‘N’ boards under a constraint that any painter will only paint the continuous sections of boards.


TODO: In CodeStudio complete solution
LINK - "https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557"
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int pageSum = 0, studentCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    long long int s = 0, n = boards.size(), e = accumulate(boards.begin(), boards.end(), 0);
    long long int ans = -1, mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
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
    cout << "Enter the number of painters: ";
    cin >> x;
    int minHours = findLargestMinDistance(arr, x);
    cout << "Maximum time(hours) required: " << minHours << endl;
    return 0;
}