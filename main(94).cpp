/*
   Programmer   : Adi Zejnilovic
   Date         : 09/24/2014
   Description  : This program will perform conversion for ....
*/

#include <iostream>

using namespace std;

int main()
{
    // constants
    const double M2K_COEFF = 1.6;   // miles to km conversion coefficient
    const double K2M_COEFF = 1/1.6; // 0.625...
    const double LBS2KGS_COEFF = 0.453592;

    // variables
    int userChoice;   // to hold user selection from the menu
    double miles,
           kms;

    // Welcome Message
    cout << "Welcome to COP 1334 Conversion Utilities" << endl;

    // Create a menu
    cout << "1. Miles to Kilometers" << endl;
    cout << "2. Kilometers to Miles" << endl;
    cout << "3. Pounds to Kilograms" << endl;
    cout << "4. Kilograms to Pounds" << endl;
    cout << "5. Exit" << endl;
    cout << "Your choice: ";
    cin >> userChoice;    // capture userChoice
    cin.ignore();         // defensive programming

    switch(userChoice)
    {// beginning of the switch
       case 1:
           // perform M2K conversion
           cout << "How many miles did you jog today, ey: ";
           cin >> miles;

           // compute the conversion
           kms = miles * M2K_COEFF;

           cout << miles << " miles is " << kms << " kilometers " << endl;
           break;
       case 2:
           cout << "How many kilometers did you jog today, ey: " << endl;
           cin >> kms;

           // compute the conversion
           miles = kms * K2M_COEFF;
           cout << kms << " kilometers is: " << miles << " miles " << endl;
           break;
       case 3:
           cout << "LBS to KG - TO BE IMPLEMENTED LATER" << endl;
           break;
       case 4:
           cout << "KG to LBS - TO BE IMPLEMENTED LATER" << endl;
           break;
       case 5:
           cout << "Thank you for using COP 1334 conversion utilities" << endl;
           break;
       default:
           cout << "Wrong choice, please enter 1,2,3,4, or 5 only" << endl;
    }// end of the switch



    /*if (userChoice == 1)
    {
        // perform M2K conversion
        cout << "How many miles did you jog today, ey: ";
        cin >> miles;

        // compute the conversion
        kms = miles * M2K_COEFF;

        cout << miles << " miles is " << kms << " kilometers " << endl;
    }
    else if (userChoice == 2)
    {
        cout << "How many kilometers did you jog today, ey: " << endl;
        cin >> kms;

        // compute the conversion
        miles = kms * K2M_COEFF;
        cout << kms << " kilometers is: " << miles << " miles " << endl;
    }
    else if (userChoice == 3)
    {
        cout << "LBS to KG - TO BE IMPLEMENTED LATER" << endl;
    }
    else if (userChoice == 4)
    {
        cout << "KG to LBS - TO BE IMPLEMENTED LATER" << endl;
    }
    else if (userChoice == 5)
    {
        cout << "Thank you for using COP 1334 conversion utilities" << endl;
    }
    else   // trailing else
    {
        cout << "Wrong choice, please enter 1,2,3,4, or 5 only" << endl;
    }
    */
    return 0;
}
