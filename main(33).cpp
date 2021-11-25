#include <iostream>




using namespace std;




int main()

{

    /*

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

        */

    int quizzes[10];

    quizzes[0] = 100;  // 1st position

    quizzes[1] = 90;   // 2nd position

    quizzes[2] = 85;   // 3rd

    quizzes[3] = 50;

    quizzes[4] = 69;

    quizzes[5] = 88;

    quizzes[6] = 89;

    quizzes[7] = 90;

    quizzes[8] = 100;

    quizzes[9] = 100;  // 10 the position




    for (int i=0; i< 10; i++)

    {

        cout << "quiz " << i + 1 << " score is: " << quizzes[i] << endl;

    }



    // example using double

    double amountSpent[5];



    for (int i=0; i<5; i++)

    {

       cout << "Day " << i+1 << " meal cost: ";

       cin >> amountSpent[i];

    }



    // calculate the average $ per lunch

    double sum=0;

    for(int i=0; i<5; i++)

    {

        sum = sum + amountSpent[i];

    }



    double average = sum/5;



    cout << "Average $ amount spent for lunch is: "  << average << endl;

    return 0;

}

