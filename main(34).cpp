#include <iostream>




using namespace std;




// function prototypes

double playerAverage(int, int, int, int , int );

double fahren2Celc(int, double );




int main()

{

    int game1,

        game2,

        game3,

        game4,

        game5;    // points player scored in each game




    double retVal; // to hold the value returned from the function




    // capture this info from the user

    cout << "Game 1: ";

    cin >> game1;




    cout << "Game 2: ";

    cin >> game2;




    cout << "Game 3: ";

    cin >> game3;




    cout << "Game 4: ";

    cin >> game4;




    cout << "Game 5: ";

    cin >> game5;




    // call a function that will return the average

    // game1,2,3,4 and 5 are arguments

    retVal = playerAverage(game1, game2, game3, game4, game5);




    // call by Value - a copy of the value in each arguments was stored

    // in the parameters







    // display the result

    cout << "LeGone James Averages: " << retVal << endl;




    // LeGone does not perform well when the temp is 100F

    // what is 100F in celcius eey?

    int tempF = 100;

    double convFactor = 5.0/9;




    cout << tempF << " degrees F is "

         // << fahren2Celc(convFactor, tempF) - Remember to match your arg and params

         << fahren2Celc(tempF, convFactor)

         << " Not a good environment for LeGone!"

         << endl;




    return 0;

}




double playerAverage(int g1, int g2, int g3, int g4, int g5)

{  // g1,2,3,4 and 5 are parameters

    int sum;

    double avg;




    sum = g1 + g2 + g3 + g4 + g5;

    avg = sum / 5.0;   // force mixed mode arithmetic

    return avg;

}




double fahren2Celc(int tF, double factor)

{

    double tempC;

    cout << "in F2C tempF received: " << tF << endl;

    cout << "in F2C factor received: " << factor << endl;

    tempC = (tF - 32) * factor;

    return tempC;

}
