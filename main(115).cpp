#include <iostream>

using namespace std;

// Global constants  - its OK to have global constants
const double I2C_CONV = 2.54;
const double M2K_CONV = 1.609;

// GLOBAL VARIABLES -- DO NOT DO THIS!!!!
double miles;
double kilometer;

// Function Prototypes
double inches2Centimeters(double);
void displayValues(double, double);
void miles2Kilometers();

int main()
{
    double retVal;
    // miles to kilometers
    //cout << "Enter miles: ";
    //cin >> miles;

    // inches 2 centimeters conversoion
    retVal = inches2Centimeters(10);
    displayValues(10, retVal);


    miles2Kilometers();
    cout << miles << " is " << kilometer << " kilometers" << endl;
    return 0;
}

double inches2Centimeters(double inches)
{
    cout << "conversion factor: " << I2C_CONV << endl;
    double centimeters;
    centimeters = inches * I2C_CONV;
    return centimeters;
}

void miles2Kilometers()
{
    kilometer = miles * M2K_CONV;
}

void displayValues(double inches, double centimeters)
{
   // miles = 124567;
   cout << inches << " is "
        << centimeters
        << " centimeters"
        << endl;
}

