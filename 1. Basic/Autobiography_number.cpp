/*
An Autobiographical number is a number N such that the first digit of N
represents the count of how many zeroes are there in N, the second digit
represents the count of how many ones are
there in N and so on.

You are given a function,
int FindAutoCount (char);

The function accepts string "n" which is a number and checks whether the number
is an autobiographical number or not. If it is an autobiographical number it returns an integer, ie. the count
of distinct numbers in "n". If it is not an autobiographical number it returns 0.

Assumption:
The input string will not be longer than 10 characters.
Input string will consist of numeric characters

Note:
If string is null return 0.
*/

#include <bits/stdc++.h>
using namespace std;

int findAutoCount(char *n)
{
    if (strlen(n)==0)
    {
        return NULL;
    }
    
}

int main()
{
    string str;
    int num;
    cout << "Enter a number : ";
    cin >> num;
    str = to_string(num); // converting num to string
    char *s = &str[0];    // convering string to charecter array
    int ans = findAutoCount(s);
    return 0;
}