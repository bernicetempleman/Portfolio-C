#include <iostream>

using namespace std;

const int NUM_COLS = 4;
const int NUM_ROWS = 3;

// function prototypes
void display2DArray(int [][NUM_COLS]);
void displayStudentAverage(int [][NUM_COLS],string[]);
void displayExamMin(int [][NUM_COLS], string[]);
void displayExamMax(int [][NUM_COLS], string []);

int main()
{
    int studentExamArray[][NUM_COLS] = {

                            {55, 80, 77, 95},

                            {80, 85, 90, 92},

                            {100, 78, 89, 95}

                         };

    string names[] = {"Joe","Jake","Jill"};
    string exams[] = {"Exam 1", "Exam 2", "Exam 3", "Exam 4"};

    display2DArray(studentExamArray);
    displayStudentAverage(studentExamArray, names);
    displayExamMin(studentExamArray, exams);
    displayExamMax(studentExamArray, exams);


    return 0;

}

void display2DArray(int anArray[][NUM_COLS])
{
    for (int i=0; i<NUM_ROWS; i++)

    {

        for (int j=0; j<NUM_COLS; j++)

        {

            cout << anArray[i][j] << " ";

        }

        cout << endl;

    }
}

void displayStudentAverage(int anArray[][NUM_COLS], string names[])
{
    double total = 0;

   for (int i=0; i<NUM_ROWS; i++)

    {

        for (int j=0; j<NUM_COLS; j++)

        {
            total = total + anArray[i][j];
            //cout << anArray[i][j] << " ";

        }

        cout << "Average of Student "<< names[i] << ": " << total/NUM_COLS <<endl;

    }

}

void displayExamMin(int anArray[][NUM_COLS], string exams[])
{

    int examMin [NUM_COLS];

    for (int i=0; i<NUM_ROWS; i++)
    {

        for (int j=0; j<NUM_COLS; j++)
        {
            if(examMin[i] < anArray[i])
                examMin[i] = anArray[i];
        }

        cout << "Min Score "<< exams[i]<< ": " << examMin <<endl;

    }


}

void displayExamMax(int anArray[][NUM_COLS], string exams[])
{


}
