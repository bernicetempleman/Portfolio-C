#include <iostream>

using namespace std;

int main()
{
    int testScore;
    double gpa;

    cout << "Test score: ";
    cin >> testScore;
    cin.ignore();
    cin.sync();

    cout << "GPA: ";
    cin >> gpa;

    cout << "Your test score is: " << testScore << endl;
    cout << "Your GPA is : " << gpa << endl;

    return 0;
}
