#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    string firstName;

    cout << "Please enter your name: ";
    cin >> firstName;

    cout << "Hello " << firstName << endl;
    */

    // whitespace issue!!!
/*    string fullName;
      cout << "Please enter your full name: ";
      cin >> fullName;
      cout << "Hello " << fullName << endl;
*/

    // enlist help of the getline
     string fullName;
     cout << "Please enter your full name: ";
     getline(cin, fullName);
     cout << "Hello " << fullName << endl;

    return 0;
}
