#include <iostream>
#include <ctime>     // time
#include <cstdlib>   // random function generator

using namespace std;

int main()
{
    const int LOW = 1;
    const int HIGH = 100;

    int rNumber;               // random number
    int userGuess;
    int counter = 0;

    //get the seed
    unsigned seed = time(0);   // get computer time
    srand(seed);               // seed the random number generator

    rNumber = rand() % (HIGH-LOW + 1) + LOW;

    //cout << "COMPUTER: This is my random number: " << rNumber << endl;
    cout << "I thought of a number between 1 and 100"<< endl;
    cout << "Can you guess it: ";
    cin >> userGuess;
    counter++;

    while (userGuess != rNumber)
    {
        if (userGuess > rNumber)
           cout << "TOO HIGH" << endl;
        else if (userGuess < rNumber)
            cout << "TOO LOW" << endl;
        cout << "Your guess: ";
        cin >> userGuess;
        counter++;
    }

    cout << "Congrats, you guessed correctly!";
    cout << "COMPUTER: This is my random number: " << rNumber << endl;
    cout << "It took you " << counter << " times to guess right" << endl;

    return 0;
}
