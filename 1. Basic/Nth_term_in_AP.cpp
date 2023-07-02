// nth term = a + (n-1)*d
// a = first term
// d = common difference
#include <iostream>
using namespace std;

int main()
{
    int a, n, d;
    cout << "Enter the first term: ";
    cin >> a;
    cout << "Enter the common difference: ";
    cin >> d;
    cout << "Enter the number for nth term: ";
    cin >> n;
    cout << "Nth term of this Arithmetic Progression: " << (a + (n - 1) * d) << endl;
    return 0;
}