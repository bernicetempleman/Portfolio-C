#include <iostream>




using namespace std;




// function prototypes

void populateStudentRecord(const string [], string [], double [], string[], int);

void displayStudentRecord(const string [], const string [], const double [], const string[], int );




int main()

{

    const int NUM_STUDENTS = 3;




    // declare an array of student names

    string myStudents[NUM_STUDENTS] = {"Joe", "Jake", "Jill"};




    // declare an array that will hold student majors

    string studentMajor[NUM_STUDENTS];




    // declare an array to hold student GPA

    double studentGPA[NUM_STUDENTS];




    // declare an array of student classification (FRESHMAN, Sophmore, etc_)

    string yearInCollege[NUM_STUDENTS];




    populateStudentRecord(myStudents, yearInCollege, studentGPA, studentMajor, NUM_STUDENTS);

    displayStudentRecord(myStudents, yearInCollege, studentGPA, studentMajor, NUM_STUDENTS);










    return 0;

}




void populateStudentRecord(const string names[], string yic[], double gpa[], string major[], int numStudents)

{

    for (int i=0; i<numStudents; i++)

    {

        cout << "Enter the GPA for " << names[i] << " : ";

        cin >> gpa[i];




        cout << "Enter the classification for " << names[i] << " : ";

        cin >> yic[i];




        cout << "Enter the major for " << names[i] << " : ";

        cin >> major[i];

    }

}




void displayStudentRecord(const string names[], const string yic[], const double gpa[], const string major[], int numStudents)

{

    for (int i=0; i<numStudents; i++)

    {

        cout << yic[i] << " " << names[i]

             << " is majoring in " << major[i]

             << "and their GPA is : " << gpa[i]  << endl;

    }

}
