#include <iostream>




using namespace std;




const int NUM_STUDENTS = 3;

const int NUM_EXAMS = 4;




// function prototypes

double studentAverage(int, int [][NUM_EXAMS]);

int getMaxScore(int , int [][NUM_EXAMS]);




int main()

{

    int studentGrades[][NUM_EXAMS] = {

                                        {55, 80, 77, 95},

                                        {80, 85, 90, 92},

                                        {100,78, 89, 95}

                                     };




    for (int curStud=0; curStud<NUM_STUDENTS; curStud++)

    {

        cout << "Student "  << curStud+1

             << " average is: "

             << studentAverage(curStud,studentGrades)

             << endl;

    }




    for (int curExam = 0; curExam<NUM_EXAMS; curExam++)

    {

        cout << "Exam "  << curExam+1

             << " highest score is: "

             << getMaxScore(curExam,studentGrades)

             << endl;

    }

    return 0;

}




// function that will calculate student average

double studentAverage(int currentStudent,int myStudents[][NUM_EXAMS] )

{

    double sum = 0;

    double avg;

    for (int i=0; i<NUM_EXAMS; i++)

    {

        sum = sum + myStudents[currentStudent][i];

    }

    avg = sum / NUM_EXAMS;

    return avg;

}




int getMaxScore(int currExam, int myStudents[][NUM_EXAMS])

{

    int maxScore = myStudents[0][currExam];




    for (int i=1; i<NUM_STUDENTS; i++)

    {

        if (myStudents[i][currExam] > maxScore)

            maxScore = myStudents[i][currExam];

    }




    return maxScore;

}
