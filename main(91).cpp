#include <iostream>

using namespace std;

int main()
{
    int number = 100;

    cout << "PREFIX" << endl;
    cout << "Number BEFORE the operation: " << number << endl;
    ++number;     // same  as x = x + 1;
    cout << "Number AFTER the operation: " << number << endl;

    int number2 = 1;
    cout << "POSTFIX" << endl;
    cout << "Number2 BEFORE the operation: " << number2 << endl;
    number2++;     // same  as x = x + 1;
    cout << "Number2 AFTER the operation: " << number2 << endl;

    cout << "========================================" << endl;
    cout << "PREFIX" << endl;
    number = 20;
    // the following statement has inline operation
    cout << "Number <PREFIX> the operation: " << ++number << endl;

    cout << "PREFIX" << endl;
    number = 1000;
    // the following statement has inline operation
    cout << "Number <POSTFIX> the operation: " << number++ << endl;
    cout << "Number <AFTER POSTFIX> the operation: " << number << endl;




    return 0;
}
