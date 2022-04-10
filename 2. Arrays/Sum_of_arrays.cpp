/*
You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[])
of lengths 'N' and 'M' respectively, where each array element represents a digit.
You need to find the sum of these two numbers and return this sum in the form of an array.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        swap(v[l++], v[r--]);
    }
    return v;
}
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1, j = m - 1, carry = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    // if elements remain in a
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    // if elements remain in b
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    // if carry remains
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // as array is stored in reverse we have to reverse it
    return reverse(ans);
}
void input(vector<int> &v, int n)
{
    int x;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
}

int main()
{
    vector<int> v1, v2;
    int s1, s2, x;
    cout << "Enter the sizes of arrays 1 and 2: ";
    cin >> s1 >> s2;
    input(v1, s1);
    input(v2, s2);
    vector<int> ans = findArraySum(v1, s1, v2, s2);
    cout << "The resultant array: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }
    return 0;
}