/*
Given an integer array nums of length n where all the integers of nums are in the
range [1, n] and each integer appears once or twice, return an array of all the 
integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;
    /*
        also be done as - 
        int n=nums.size();
        vector<int> ans;
     
        for(int i=0;i<n;i++) 
        {
            int idx=abs(nums[i])-1;   
            nums[idx]=-nums[idx];   
            if(nums[idx]>0)  
            {
                ans.push_back(idx+1);
            }       
        }
        return ans;
        */
}

int main()
{
    vector<int> arr, ans;
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
    ans = findDuplicates(arr);
    cout << "Duplicates : " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
