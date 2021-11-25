#include <iostream>

using namespace std;

int main()
{
    /*
    int number;
    cout << "Please enter a number: ";
    cin >> number;  // reads the number from keyboard buffer

    cout << "You entered: " << number << endl;
    */
    int num1, num2;
    cout << "Please enter 2 numbers. Put space between them" << endl;
    cout << "Number 1 and Number 2:";
    cin >> num1 >> num2;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    // better way is to separate your prompts
    cout << "Please enter your 1st number: ";
    cin >> num1;

    cout << "Please enter your 2nd number: ";
    cin >> num2;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;


    return 0;
}
