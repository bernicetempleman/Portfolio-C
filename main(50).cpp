# include <iostream>




using namespace std;




// global constants

const double INCH_2_CM = 2.54;




// global variable (DO NOT DO THIS)

double inches;




// function prototypes

double inches2Centimeters(double);

void displayValues(double, double );

int main()

{

    double retVal;

    cout << "Enter the length in inches: ";

    cin >> inches;



    retVal = inches2Centimeters(inches);



    return 0;

}




double inches2Centimeters(double inches)

{

    cout << "conversion factor: " << I2C_CONV << endl;

    double centimeters;

    centimeters = inches * I2C_CONV;

    return centimeters;

}




void displayValues(double inches, double centimeters)

{



}

   cout << inches << " is "

        << centimeters

        << " centimeters"

        << endl;

}
