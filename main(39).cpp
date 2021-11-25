#include <iostream>

using namespace std;

int main()
{
    /*Loops
    1. initialization
    2. test
    3. execute statements(S)
    4. UPDATE
    */

    int totalTestScores=0;          //initialize
    int


    while (x <10)      //test
    {
        //statements   // 3.execute
        x=x+1;         //update
    }

    //know how many times to execute
    for (int i=0; i<10; i++)
    {
        cout << "for loop: hello"<<endl;
        cout <<"i= "<< i<<endl;
    }

    //rewrite for as a while
    int i =0;
    while (i <10)
    {
        cout << "while loop"<<endl;
        cout <<"i= "<< i<<endl;
        i++;
    }

    //
    int numGames;
    int points;
    int totalPoints = 0;
    double ppgAVG;   //points per game average

    cout << "How many games did he play : ";
    cin >> numGames;
    //ask user for number of games played
    //may require defensive programming


//***rewrite as a while loop***********************************
    //for each game collect number of points
    for (int game = 0; game <numGames; game++) //no semicolon
    {
        cout << "Game # " << game +1 << " points :";
        cin >> points;

        totalPoints = totalPoints + points;
    }

    //compute average
    ppgAVG = static_cast<double>(totalPoints)/numGames;

    //display
    cout << "Dwayne averaged: "<< ppgAVG
    << " points is " << numGames
    << " games " << endl;
//************************************************************

    /*for loop with sections omitted = infinite loop
    for(;;)
    {
        cout <<"infinite loop "<<endl;

    }

//equivalent to
while(true)
{

    //never set to false
}
*/

//can omit first sectioj
/*
int i =0;
for(; i <10; i++)
{
    cout << "i ="<<i << endl;
}

//don't omit 2nd or 3rd section

//******************************

//do while is a post test loop... guaranteed once
/*

do //no semicolon
{
   statements
} while (expression);

*/
int userChoice;
do {

    cout << "1. F2C" << endl;
    cout << "2. C2f" << endl;
    cout << "5. Exit" ;
    cin >> userChoice;
 }   while (userChoice !=5);

    cout << "Hello world!" << endl;
    return 0;
}
