/*
Given an array of characters chars, compress it
using the following algorithm:

Begin with an empty string s. For each group of
consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately,
but instead, be stored in the input character array chars.
Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.
*/

#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    int j;
    while (i < n)
    {
        j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        // after a new character is found
        chars[ansIndex++] = chars[i];
        int count = j - i;
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main()
{
    vector<char> vec;
    int s;
    char ch;
    cout << "Enter size of vector : ";
    cin >> s;
    cout << "Enter the vector : ";
    for (int i = 0; i < s; i++)
    {
        cin >> ch;
        vec.push_back(ch);
    }
    cout << "Final array size : " << compress(vec) << endl;
    return 0;
}