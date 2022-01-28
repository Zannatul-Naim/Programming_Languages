#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;
    // Enter a number stored in divident
    cout << "Enter dividend: ";
    cin >> dividend;
    // Enter a number stored in divisor
    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    // remainder stored.
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;

    return 0;
}
