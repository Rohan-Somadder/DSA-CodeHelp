#include <bits/stdc++.h>
using namespace std;

// TODO : For -ve number dec to binary.

void bin_to_dec(long int bin)
{
    int dec = 0, i = 0;
    while (bin != 0)
    {
        dec += pow(2, i++) * (bin % 10);
        bin /= 10;
    }
    cout << "The decimal is : " << dec << endl;
}

void dec_to_bin(int dec)
{
    int i = 0;
    long int bin = 0;
    while (dec != 0)
    {
        bin += floor(pow(10, i++) * (dec % 2));
        dec /= 2;
    }
    cout << "The binary is : " << bin << endl;
    // Decimal to Binary
    /*
        meathod 2-
        cout << "Enter the decimal number: ";
        cin >> dec;
        bin = 0;
        int bit;
        while(dec != 0)
        {
            bit = dec & 1;
            bin = floor(bit * pow(10,i++)) + bin;
            dec = dec >> 1;
        }
        cout << "The binary is : " << bin << endl;
        */
}

void dec_to_bin_negative(int dec)
{
    vector<int> bin;
    dec *= -1;
    int i = 0, total_digits = ceil(log2(dec) + 1);
    while (dec != 0)
    {
        bin.push_back(dec % 2);
        dec /= 2;
    }
    cout << "T D:" << total_digits << endl;
    for (i = bin.size(); i < total_digits; i++)
        bin.push_back(0);
    reverse(bin.begin(), bin.end());

    // 1's comliment + 1

    for (i = 0; i < bin.size(); i++)
    {
        bin[i] = bin[i] ^ 1;
    }
    bin[bin.size() - 1] += 1;

    // Display

    cout << "The binary is : ";
    for (i = 0; i < bin.size(); i++)
        cout << bin[i];
    cout << endl;
}

int main()
{
    int ch;
    cout << "1 : Binary to Decimal\n2 : Decimal to Binary\nEnter: ";
    cin >> ch;
    if (ch == 1)
    {
        // Binary to Decimal
        long int bin;
        cout << "Enter the binary number: ";
        cin >> bin;
        bin_to_dec(bin);
    }
    else if (ch == 2)
    {
        // Decimal to Binary
        int dec;
        cout << "Enter the decimal number: ";
        cin >> dec;
        if (dec > 0)
        {
            dec_to_bin(dec);
        }
        else if (dec == 0)
        {
            cout << 0;
        }
        else
        {
            dec_to_bin_negative(dec);
        }
    }
    return 0;
}