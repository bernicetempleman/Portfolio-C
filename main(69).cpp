#include <iostream>

using namespace std;

int main()
{
    int numGames;       // to hold number of games played
    int points;         // number of points in a single game
    int totalPoints=0;  // accumulator!
    double ppgAVG;

    // ask the user for number of games Dwyane Wade played
    cout << "How many games did Dwyane play : ";
    cin >> numGames;

    // may require some defensive programming

    // AT HOME: re-write as the while loop
    // for each game, collect number of points scored
    //for (int game = 0; game < numGames; game++)
    int game;
    for ( game = 0; game < numGames; game++)
    {
        cout << "Game # " << game + 1 << " points :";
        cin >> points;

        totalPoints = totalPoints + points;
    }

    // compute the average
    ppgAVG = totalPoints/static_cast<double> (numGames);

    // display
    cout << "Dwyane averaged: " << ppgAVG
         << " points in " << numGames
         << " games " << endl;

    return 0;
}
