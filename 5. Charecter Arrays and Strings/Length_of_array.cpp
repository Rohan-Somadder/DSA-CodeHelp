#include <bits/stdc++.h>
using namespace std;

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
    cout << "The length of the array: " << len;
    return 0;
}