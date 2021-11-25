#include <iostream>

using namespace std;

int main()
{
    // constants
    const int SENTINEL = -99;   // this is a sentinel value
                                // used to terminate the loop

    // variables
    int numGoals;     // goals in a game
    int totalGoals=0;   // accumulator

    // "priming read"
    cout << "Enter number of goals scored, -99 to quit: ";
    cin >> numGoals;
    while (numGoals != SENTINEL)
    {
        totalGoals += numGoals;

        cout << "Enter number of goals scored, -99 to quit: ";
        cin >> numGoals;
    }
    cout << "numGoals : " << numGoals << endl;

    cout << "Leo Messi scored : " << totalGoals << endl;

    return 0;
}
