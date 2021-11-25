#include <iostream>
#include < cmath>

using namespace std;

int main()
{
    int number;
    cout << "Enter a Positive Even number: ";
    // cin >> number;


    while(!((cin >> number)<0) || (number%2==0)))
    {
        cin.clear();
        cin.sync();

        cout << "Wrong number type! " << endl;
        cout << "Please enter a positive even number

       // char ch;
       // while(cin.get(ch) && ch != '\n');  // infinite loop on purpose
       cout << "Enter a Positive Even number: ";

    }

    cout << "You entered : " << number << endl;
    return 0;
}
