#include <iostream>

using namespace std;

double average(int, int, int, int, int, int, int, int, int, int);
int main()
{
    // keep track of 10 quiz scores and compute the average
    int quiz1 = 100,
        quiz2 = 90,
        quiz3 = 85,
        quiz4 = 50,
        quiz5 = 69,
        quiz6 = 88,
        quiz7 = 89,
        quiz8 = 90,
        quiz9 = 100,
        quiz10 = 100;

        cout << "The average is :"
             << average(quiz1, quiz2,quiz3, quiz4,quiz5, quiz6, quiz7, quiz8, quiz8, quiz10)
             << endl;
    return 0;
}

double average(int q1, int q2, int q3, int q4, int q5, int q6, int q7, int q8, int q9, int q10)
{
    return (q1+q2+q3+q4+q5+q6+q7+q8+q9+q10)/10.0;
}
