/*
Given an array of length ‘N’, where each element denotes the position of a stall.
Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that
are aggressive. To prevent the cows from hurting each other, you need to assign the
cows to the stalls, such that the minimum distance between any two of them is as
large as possible. Return the largest minimum distance.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int k, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
                return true;
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0, maxi = -1, ans = -1, e;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(stalls[i], maxi);
    }
    e = maxi;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n, x;
    vector<int> stalls;
    cout << "Enter number of stalls: ";
    cin >> n;
    cout << "Enter the stall value: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        stalls.push_back(x);
    }
    cout << "Enter the number of cows: ";
    cin >> x;
    int maxDist = aggressiveCows(stalls, x);
    cout << "Maximum dist : " << maxDist << endl;

    return 0;
}