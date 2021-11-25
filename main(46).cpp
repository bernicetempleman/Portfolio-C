#include <iostream>




using namespace std;




// function prototypes

void displayMenu();

int addition(int, int);

int subtraction(int, int );

int multiplication(int, int);

double division(int, int );

void getUserInput(int& , int &);

int main()

{

    int userChoice;

    int number1,       // operand

        number2;       // operand  for math operation

    int retVal;        // value returned from a function

    displayMenu();     //call the function

    double retQuot;    // capture the return of division

    cin >> userChoice;




    while (userChoice !=5)

    {

       switch(userChoice)

       {

            case 1:

                cout << "So.. you want to add two numbers? OK..." << endl;

                getUserInput(number1, number2);




                /*  same thing as the statement below

                // inline -- cout "receives" the returnValue from the function

                cout << number1 << " + " << number2 << " = "

                     << addition(number1, number2)

                     << endl;

                */

                // capture the return value from a function and store it in

                // a variable

                retVal = addition(number1, number2);

                cout << number1 << " + " << number2 << " = "

                     << retVal

                     << endl;

                break;

            case 2:

                cout << "So.. you want to subtract two numbers? OK..." << endl;

                getUserInput(number1, number2);

                retVal = subtraction(number1, number2);

                cout << number1 << " - " << number2 << " = "

                     << retVal

                     << endl;

                break;

            case 3:

                cout << "So.. you want to multiply two numbers? OK..." << endl;

                getUserInput(number1, number2);

                retVal = multiplication(number1, number2);

                cout << number1 << " * " << number2 << " = "

                     << retVal

                     << endl;

                break;

            case 4:

                cout << "So.. you want to divide two numbers? OK..." << endl;

                getUserInput(number1, number2);

                retQuot = division(number1, number2);

                cout << number1 << " / " << number2 << " = "

                     << retQuot

                     << endl;

                break;

            default:

                cout << "please enter 1, 2, 3, or 5 only!" << endl;

       }

       displayMenu();

       cin >> userChoice;

    }







    return 0;

}




// pass by Reference - you really are not passing anything, except address

// there is no copy

void getUserInput(int& n1, int &n2)

{

    cout << "First Number: ";

    cin >> n1;

    cout << "Second Number: ";

    cin >> n2;

}




int multiplication(int num1, int num2)

{

    int product;

    product = num1 * num2;

    return product;

}




int subtraction(int num1, int num2)

{

    int difference;

    difference = num1 - num2;

    return difference;

}




int addition(int num1, int num2)

{

    int sum;

    sum = num1 + num2;

    return sum;

}




double division(int numerator, int denominator)

{

    double quotient;

    if (denominator == 0)

    {

        cout << "denominator cannot be a zero" << endl;

        return -99.99;

    }

    quotient = numerator/static_cast<double>(denominator);

    return quotient;

}




void displayMenu()

{

    cout << "Please choose from one of the following options:" << endl;

    cout << "1. Add 2 numbers " << endl;

    cout << "2. Subtract 2 numbers" << endl;

    cout << "3. Multiply 2 numbers" << endl;

    cout << "4. Divide 2 number" << endl;

    cout << "5. Quit" << endl;

    cout << "Your choice: ";

}
