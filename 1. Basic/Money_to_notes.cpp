/*
we get 1330 rs
thus we have 13 -> 100 rs notes, 0->50 rs notes, 1-> 20 rs notes, 10 -> 1 rs notes.  
*/
#include <iostream>
using namespace std;

int main()
{
    int money;
    cout << "Enter the amount of money: ";
    cin >> money;
    int rs100, rs50, rs20, rs10, rs1;
    switch (100)
    {
    case 100:
        rs100 = money / 100;
        money -= rs100 * 100;
    case 50:
        rs50 = money / 50;
        money -= rs50 * 50;
    case 20:
        rs20 = money / 20;
        money -= rs20 * 20;
    case 10:
        rs10 = money / 10;
        money -= rs10 * 10;
    case 1:
        rs1 = money / 1;
    }
    cout<<rs100<<"--> 100 Rs notes"<<endl;
    cout<<rs50<<"--> 50 Rs notes"<<endl;
    cout<<rs20<<"--> 20 Rs notes"<<endl;
    cout<<rs10<<"--> 10 Rs notes"<<endl;
    cout<<rs1<<"--> 1 Rs notes"<<endl;
    return 0;
}