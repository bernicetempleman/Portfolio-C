#include <iostream>

using namespace std;

int main()
{
    /*
    THIS IS A "POST TEST" LOOP. it is GUARANTEED to execute at least once!

    do
    {
        statement(s);
    }while(expression);  <-- ends with a semicolon
    */
    int userChoice;
    do
    {
       cout << "1. F2C" << endl;
       cout << "2. C2f" << endl;
       cout << "3. M2K" << endl;
       cout << "4. K2M" << endl;
       cout << "5. Exit" << endl;
       cout << "Please enter your choice: ";
       cin >> userChoice;

       switch(userChoice)
       {
            case 1:
               cout << "TBIL: F2C" << endl;
               break;
            case 2:
               cout << "TBIL: C2F" << endl;
               break;
            case 3:
               cout << "TBIL: M2K" << endl;
               break;
            case 4:
               cout << "TBIL: K2M" << endl;
               break;
            case 5:
               cout << "Thank you and have a nice day!" << endl;
               break;
            default:
               cout << "Please enter 1,2,3,4 or 5 only!" << endl;
               cout << "Your choice: ";
               cin >> userChoice;
       }
    }while(userChoice != 5);

    return 0;
}
