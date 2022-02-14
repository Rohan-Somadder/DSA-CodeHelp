/*
Ayush is studying for ninjatest which will be held after 'N' days,
And to score good marks he has to study 'M' chapters and the ith chapter
requires TIME[i] seconds to study. The day in Ayush’s world has 100^100 seconds.
There are some rules that are followed by Ayush while studying.
1. He reads the chapter in a sequential order, i.e. he studies i+1th chapter only after he studies ith chapter.
2. If he starts some chapter on a particular day he completes it that day itself.
3. He wants to distribute his workload over 'N' days, so he wants to minimize the
maximum amount of time he studies in a day.
Your task is to find out the minimal value of the maximum amount of time for which
Ayush studies in a day, in order to complete all the 'M' chapters in no more than 'N' days.
*/

#include <bits/stdc++.h>
using namespace std;

bool IsPossible(vector<int> time, long long int n, long long int m, long long int mid)
{
    long long int numberOfDays = 1;
    long long int timeSum = 0;
    for (int i = 0; i < m; i++)
    {
        if (timeSum + time[i] <= mid)
        {
            timeSum += time[i];
        }
        else
        {
            numberOfDays++;
            if (numberOfDays > n || time[i] > mid)
            {
                return false;
            }
            timeSum = time[i];
        }
    }
    return true;
}

long long timeForTest(int n, int m, vector<int> time)
{
    // n : days, m: chaps
    long long int start = 0;
    long long int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = sum + time[i];
    }
    long long int end = sum;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start <= end)
    {
        if (IsPossible(time, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int chaps, days;
    vector<int> arr;
    cout << "Enter the numbers of chaps : ";
    cin >> chaps;
    cout << "Enter the array: ";
    for (int i = 0; i < chaps; i++)
    {
        cin >> days;
        arr.push_back(days);
    }
    cout << "Enter the number of days: ";
    cin >> days;
    long long int t = timeForTest(days, chaps, arr);
    cout << "The max hours to study a day : " << t << endl;
    return 0;
}