#include <iostream>

using namespace std;

int main()
{
    int number;
    bool isPositive = true; // a flag that controls the loop
    int sumOfPositiveNumbers = 0;  // accumulator

    // priming read
    cout << "Enter a number, 0 or negative to quit: ";
    cin >> number;

    while( number >0 && isPositive)
    {
        sumOfPositiveNumbers = sumOfPositiveNumbers + number;

        cout << "Enter a number, 0 or negative to quit: ";
        cin >> number;
        if (number <= 0)
        {
            isPositive = false;
            cout << "Thank you for using my program" << endl;
        }
    }
    cout << "The sum is : " << sumOfPositiveNumbers << endl;
    return 0;
}
