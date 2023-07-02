/*
Format the given array by separating the evens and odds and placing them in the
new array as their respective original order.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> format(vector<int> arr)
{
    int lasteven=0,lastodd=0;
    vector<int> ans;
    for(int i=0;i<arr.size();i++)
    {
        if (arr[i]%2==0)
        {
            ans.insert(ans.begin()+lasteven,arr[i]);
            lasteven++;
            lastodd++;
        }
        else
        {
            ans.insert(ans.begin()+lastodd,arr[i]);
            lastodd++;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums,ans;
    int n,x;
    cout<<"Enter the size : ";
    cin>>n;
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        nums.push_back(x);
    }
    ans = format(nums);
    cout<<"Formatted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<"  ";
    }
    return 0;
}
