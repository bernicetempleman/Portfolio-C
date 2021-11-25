/*
   Programmer   : bernice
   Date         :
   Description  :
*/
#include <iostream>

using namespace std;

int main()
{
    //constants
    const double M2K_COEFF = 1.6; // miles to km conversion
    const double K2M_COEFF = 1/1.6;


    //variables
    int userChoice;
    double miles, kms;

    //Welcome message
    cout << "Conversion Utilities!" << endl;

    //menu
    cout << "1. Miles to Kilometers"<< endl;
    cout << "2. Kilometers to Miles" << endl;
    cout << "3. Pounds to kilograms"<< endl;
    cout << "4. Kilograms to pounds"<< endl;
    cout << "5. Exit"<<endl;
    cout << "Your choice: ";
    cin >> userChoice; //capture userChoice
    cin.ignore(); //defensive programming: ignore
    cin.sync();   //clear out

/*    if (userChoice < 1)
    {
        cout << "Wrong Choice, please enter 1,2,3,4,5 only "<< endl;

    }
    else if (userChoice > 5)
    {
        cout << "Wrong Choice, please enter 1,2,3,4,5 only" << endl;
    }
*/
    if (userChoice == 1)
    {
        //perform M2K conversion
        cout << "How many miles did you jog today, ey: ";
        cin >> miles;

        kms = miles * M2K_COEFF;

        cout << miles << " is " << kms << endl;

    }
    else if (userChoice == 2)
    {

    }
    else if (userChoice == 3)
    {

    }
    else if (userChoice == 4)
    {

    }

    else if (userChoice == 5)
    {

    }
    else //wrong choice (trailing else = no test)
    {
        cout  << "Wrong Choice, please enter 1,2,3,4,5 only "<< endl;
    }



    return 0;
}
