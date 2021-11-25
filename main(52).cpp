#include <iostream>

#include <cmath>




using namespace std;




// function prototypes

void welcomeMessage();

void displayMenu();

double fahren2Celc(int );
double cels2Fahren(int);



int main()

{

    int userChoice;   // to hold user menu Choice

    int tempF, tempC;          // to hold temp in fahrenheit




    // Welcome message - call the function

    welcomeMessage();   // function call




    // call the menu function

    displayMenu();      // function call




    cin >> userChoice;




    switch(userChoice)

    {

        case 1:

            cout << "Fahrenheit to Celsius" << endl;

            cout << "Please enter the temp in fanrenheit: ";

            cin >> tempF;

            cout << tempF << " is "  << fahren2Celc(tempF)

                 << " degrees Celsius" << endl;

            break;

        case 2:

            cout << "Celsius to Fahrenheit" << endl;
             cout << "Please enter the temp in C: ";

            cin >> tempC;

            cout << tempC << " is "  << cels2Fahren(tempC)

                 << " degrees Fahrenheight" << endl;

            break;

        default:

            cout << "Please enter 1, or 2 only: " << endl;    }




    return 0;

}

double cels2Fahren(int tempC)
{
    double fahrenheit;

    fahrenheit = tempC * (9/5.0) +32;
    return fahrenheit;
}



// Function     : fahren2Celc

// parameters   : fahren (input)

// returns      : temperature in celsius (double)

// Description  :

double fahren2Celc(int fahren)

{

   double celsius;




   // formula 5/9(f-32)

   celsius = 5/9.0 *(fahren - 32);




   return celsius;

}




void welcomeMessage()

{

   cout << "Welcome to COP 1334 Conversion Utilities" << endl;

}




void displayMenu()

{

    // menu

    cout << "Please choose from one of the following: " << endl;

    cout << "1. F2C "  << endl;

    cout << "2. C2F "  << endl;

    cout << "Your choice: ";

}
