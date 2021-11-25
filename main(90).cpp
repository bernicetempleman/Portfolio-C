#include <iostream>

using namespace std;

int main()
{
    string studentName;  // both, firsrt and last
    int    testScore;
    double gpa;

    // prompt for student name
    cout << "Your name: ";
    //getline(cin, studentName);  // read student name
    cin >> studentName;

    // prompt for testScore
    cout << "Test score: ";
    cin >> testScore;

    // prompt for GPA
    cout << "Your GPA: ";
    cin >> gpa;

    cout << "Hello " << studentName << endl;
    cout << "You scored: " << testScore << endl;
    cout << "Your GPA is: " << gpa << endl;
    return 0;
}
