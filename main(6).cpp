#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

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

    //switch & if-else interchangeable
    switch(userChoice)
    {
        case 1:
            cout<< " 1 "<< endl;
            break;

        case 2:
            cout<< " 2 "<< endl;
            break;
        case 3:
            cout << " 3 "<< endl;
            break;
        case 4:
            cout << " 4 "<< endl;
            break;
        case 5:
            cout <<"thank you"<< endl;
            break;
        default:
            cout <<"Wrong Choice, please enter 1,2,3,4,5 only "<< endl;


    }





    return 0;
}
