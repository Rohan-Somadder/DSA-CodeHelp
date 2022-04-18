#include <bits/stdc++.h>
using namespace std;

void reverse(char arr[], int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        swap(arr[l++], arr[r--]);
    }
}

int getLength(char arr[])
{
    int l = 0;
    for (int i = 0; arr[i] != '\0'; i++)
        l++;
    return l;
}

int main()
{
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    int len = getLength(name);
    reverse(name, len);
    cout << "The reverse of the array: " << name;
    return 0;
}