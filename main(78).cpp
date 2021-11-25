#include <iostream>

using namespace std;

int main()
{
    int numScores;         // total number of tests taken
    int testScore;         // to hold data for 1 test
    int totalTestScore=0;  // an accumulator
    double avgTestScore;

    cout << "How many tests did you take: ";
    cin >> numScores;

    int test=0;  // loop control variable (test1, test2, test3,...)
                 // 1. initialization
    while(test < numScores) // 2. test
    {  // 3. statements
        cout << "Test #" << test+1 << " : ";
        cin >> testScore;

        totalTestScore = totalTestScore + testScore;

        test++;   // 4. update
    }

    // calculate the average
    avgTestScore = totalTestScore/static_cast<double>(numScores);

    cout << "Your average test score is : "  << avgTestScore << endl;
    return 0;
}
