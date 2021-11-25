#include <iostream>

using namespace std;

// global constants
const double INCH_2_CM = 2.54;

// global variable (DO NOT DO THIS) -- AVOID
double inches=100;

// function prototypes
double inches2Centimeters();
double inches2Centimeters(double);
void displayValues(double, double );

int main()
{
    double retVal;
    //double inches;   // local to the main function
    cout << "Enter the length in inches: ";
    cin >> inches;

    //retVal = inches2Centimeters();
    retVal = inches2Centimeters(inches);
    displayValues(inches, retVal);
    cout << "INCHES: " << inches << endl;

    return 0;
}

double inches2Centimeters(double inches)
{
    double inches;  // local to the inches2Centimeters
                    // complete shadowing of the global variable
    cout << "conversion factor: " << INCH_2_CM << endl;
    double centimeters;
    centimeters = inches * INCH_2_CM;
    return centimeters;
}


double inches2Centimeters()
{
    double inches;  // local to the inches2Centimeters
                    // complete shadowing of the global variable
    cout << "conversion factor: " << INCH_2_CM << endl;
    double centimeters;
    centimeters = inches * INCH_2_CM;
    return centimeters;
}

void displayValues(double inches, double centimeters)
{
   cout << inches << " is "
        << centimeters
        << " centimeters"
        << endl;
}
