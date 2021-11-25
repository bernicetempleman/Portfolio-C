#include <iostream>

using namespace std;

int main()
{
    int testScore;    // to hold student numeric grade

    cout << "Your test score: ";
    cin >> testScore;

    // the grade must be in 0..100 range
    if ((testScore < 0) || (testScore > 100))  // || logical OR
    {
        cout << "Wrong value, please enter score in 0..100 range only!" << endl;
        cout << "Please restart the program." << endl;
    }
    else if ((testScore >= 0) && (testScore <= 59))  // && logical AND
    {
        cout << "Your letter grade is F" << endl;
    }
    else if ((testScore >=60) && (testScore <= 69))
        cout << "Your letter grade is D" << endl;
    else if ((testScore >= 70) && (testScore <= 79))
        cout << "Your letter grade is C" << endl;
    else if ((testScore >= 80) && (testScore <=89))
         cout << "Your letter grade is B" << endl;
    else
        cout << "Your letter grade is A" << endl;

    return 0;
}
