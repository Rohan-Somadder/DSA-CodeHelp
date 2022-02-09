// (32°F − 32) × 5/9 = 0°C
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter F for Farenheit and C for Celcius: ";
    cin >> ch;
    if ((ch == 'F') || (ch == 'f'))
    {
        int f;
        cout << "Enter the temperature in Fatenheit: ";
        cin >> f;
        float c = (5.0 / 9) * (f - 32);
        cout << "The temperature in Celcius is : " << c << endl;
    }
    else if ((ch == 'C') || (ch == 'c'))
    {
        int c;
        cout << "Enter the temperature in Celcius: ";
        cin >> c;
        float f = (c * (9.0 / 5)) + 32;
        cout << "The temperature in Farenheit is : " << f << endl;
    }
    return 0;
}