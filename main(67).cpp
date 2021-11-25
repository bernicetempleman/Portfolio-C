#include <iostream>

using namespace std;

int main()
{
    const int SENTINEL = -99;

    int number;
    int largest,    // max
        smallest;   // min

    // priming read
    cout << "Enter a number, -99 to quit: ";
    cin >> number;         // read user input into variable number

        // at first number is both min and max
        largest = smallest = number;

        while(number != SENTINEL)
        {
            cout << "Enter a number, -99 to quit: ";
            cin >> number;         // read user input into variable number

            // test to determine whether newly entered number is the new max
            /*(if (number != SENTINEL && number > largest)
                largest = number;

            // test to determine whether newly entered number is the new min
            if (number != SENTINEL && number < smallest)
                smallest = number;
            */
            // equivalent to the code above
            if (number !=SENTINEL)
            {
                if (number > largest)
                    largest = number;

                if (number < smallest)
                    smallest = number;
            }
        }

        // display
        if (largest == SENTINEL)
        {
           cout << "Thank you for using my program." << endl;
           cout << "I guess you are not in the mood to play " << endl;
        }
        else
        {
           cout << "Largest number is : " << largest << endl;
           cout << "Lowest number is : " << smallest << endl;
        }
    return 0;
}
