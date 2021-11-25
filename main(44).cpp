#include <iostream>
#include <cmath>

using namespace std;

//functions prototypes... preferred way
void welcomeMessage();
void displayMenu();
double fahren3Celc(int); //value returning... var name not required

/*
//functions before main
void welcomeMessage()
{
    cout << "Welcome to COP 1334 Conversion Utilities"<< endl;
}

void displayMenu()

{

    // menu

    cout << "Please choose from one of the following: " << endl;

    cout << "1. F2C "  << endl;

    cout << "2. C2F "  << endl;

    cout << "Your choice: ";

}
*/
int main()
{
    int userChoice; //to hold user choice
    int tempF;

    for (int i= 1; i<= 10; i++)
    {

        cout<< i <<" squared is " << pow(i, 2) <<endl;
    }

    //welcome message
   // cout << "Welcome to COP 1334 Conversion Utilities"<< endl;
   welcomeMessage();

   displayMenu();

  /*  //menu
    cout <<"Please choose: "<< endl;
    cout <<"1. F2C "<< endl;
    cout << "2. C2F " << endl;
    cout <<"Your choice: ";
    */
    cin >> userChoice;

    switch(userChoice)
    {
        case 1:
            cout << "Fahrenheit to Celsius" << endl;
            cout << "enter temp F";
            cin >>tempF;
            cout << tempF << "is " << fahren2Celc(tempF)<< endl;
            break;

        case 2:
            cout << "Celsius to Fahrenheit" << endl;
            break;

        default:
            cout << "Please enter 1, or 2 only: " << endl;
            }

//
    return 0;
}


//prototype befor & function after

// Function   : fahren2Celc
// parameters : fahren
// returns    : temperature in celsius (double)
// description:

double fahren2Celc(int fahren)
{
    double celsius;
    celsius = 5.0/9 * (fahren -32);
    return celsius;
}

void welcomeMessage()
{
    cout << "Welcome to COP 1334 Conversion Utilities"<< endl;
}

void displayMenu()

{

    // menu

    cout << "Please choose from one of the following: " << endl;

    cout << "1. F2C "  << endl;

    cout << "2. C2F "  << endl;

    cout << "Your choice: ";

}


