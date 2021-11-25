#include <iostream>

using namespace std;

int main()
{
    int number;
    int sumOfPositiveNumbers = 0;  // accumulator
    cout << "Enter a number, 0 or negative to quit: ";

    while(cin >> number)
    {
        if (number <= 0)
        {
            cout << "Thank you for using my program" << endl;
            break;
        }

        sumOfPositiveNumbers = sumOfPositiveNumbers + number;
        cout << "Enter a number, 0 or negative to quit: ";
    }

    cout << "The sum is : " << sumOfPositiveNumbers << endl;
    return 0;
}
