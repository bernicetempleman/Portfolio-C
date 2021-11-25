#include <iostream>

using namespace std;

int main()
{
    /*
    //loop 1
    int x = 0;
    while (x<10)
    {
        cout << "x is: " << x<<endl;
        x = x+1;
    }
    cout << "Hello world!" << endl;

   //loop 2
   //
    int custCount =0;
    double dailySales;
    double salesAmount;
    bool isOpen = true;
    char yesNo;
/*
    while (isOpen)
    {
        cout << "Customer Count: " << custCount << endl;

        cout <<"Is it time to close? <y/n>: ";
        cin >> yesNo;

        if ((yesNo == 'Y' )|| (yesNo == 'y'))
        {

            isOpen = false;
        }
        else
        {
            custCount++;
        }
    cout << custCount <<" customers visited the store today "<< endl;

    //loop 3
    //counter & accumulator
       while (isOpen)
    {
        cout << "Customer Count: " << custCount << endl;

        cout <<"Is it time to close? <y/n>: ";
        cin >> yesNo;

        if ((yesNo == 'Y' )|| (yesNo == 'y'))
        {

            isOpen = false;
        }
        else
        {
            custCount++;
            cout << " How much did you spend : ";
            cin >> salesAmount;
            dailySales = dailySales + salesAmount; //accumulator"

        }
    }
    cout << custCount <<" customers visited the store today "<< endl;
 */
    //Sentinel
    const int SENTINEL = -99;

    //variables
    int numGoals;   //goals in a game
    int totalGoals; //accumulator

    // priming read: read before the loop
    cout << "Enter number of goals scored, -99 to quit: ";
    cin >> numGoals;

    while (numGoals != SENTINEL)
    {
        totalGoals += numGoals;

    }
    cout << "Leo Massi scores :" << totalGoals <<endl;


    return 0;
}
