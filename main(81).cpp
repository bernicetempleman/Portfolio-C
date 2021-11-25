#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    // cin >> number;

    while(!(cin >> number))
    {
        cin.clear();
        //cin.sync();

        cout << "Wrong data type! " << endl;
        cout << "Please enter numbers only! Your number: " ;

        char ch;
        while(cin.get(ch) && ch != '\n');  // infinite loop on purpose
    }

    cout << "You entered : " << number << endl;
    return 0;
}
