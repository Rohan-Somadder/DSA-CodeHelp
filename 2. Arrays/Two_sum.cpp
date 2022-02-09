/*
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution,
and you may not use the same element twice.
You can return the answer in any order.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    bool flag = false;
    for (int i = 0; i < nums.size(); i++)
    {
        auto index = find(nums.begin() + i + 1, nums.end(), target - nums[i]);
        if (index != nums.end())
        {
            ans.push_back(i);
            ans.push_back(index - nums.begin());
            break;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr, ans;
    int n, t;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Enter the target: ";
    cin >> t;
    ans = twoSum(arr, t);
    cout << "Indices : " << ans[0] << " , " << ans[1] << endl;
    return 0;
}