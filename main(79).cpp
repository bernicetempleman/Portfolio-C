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

    for (int test=0; test<numScores; test++)
    {
        cout << "Test #" << test+1 << " : ";
        cin >> testScore;

        totalTestScore = totalTestScore + testScore;
    }

    // calculate the average
    avgTestScore = totalTestScore/static_cast<double>(numScores);

    cout << "Your average test score is : "  << avgTestScore << endl;
    return 0;
}
