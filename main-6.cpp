#include <iostream>

using namespace std;

const int SIZE = 12;

void displayArray(int [], int );

int main()
{
    /*
    string months[SIZE];

    months[0] = "January";
    months[1] = "February";
    */

   /*
    string months[SIZE] = {"January",
                           "February",
                           "March",
                           "April",
                           "May",
                           "June",
                           "July",
                           "August",
                           "September",
                           "October",
                           "November",
                           "December"
                          };
     cout << "The fifth month is " << months[4] << endl;

     //int x;   // declaration
     //x = 10;  // initialize (assign value to it)
     // int x = 10;
     string myFriends[] = {"Joe", "Jake", "Jill", "Mary", "Cathy","Dwyane"};
     cout << myFriends[0] << endl;
     cout << myFriends[1] << endl;
     cout << myFriends[2] << endl;
     cout << myFriends[3] << endl;
     cout << myFriends[4] << endl;
     cout << myFriends[5] << endl;
     cout << myFriends[25] << endl;
*/
     // lotto number
     int lottoThree[3];
     lottoThree[0] = 11;
     lottoThree[1] = 1;
     lottoThree[2] = 12;
     lottoThree[3] = 14;
     lottoThree[4] = 8;
     lottoThree[5] = 3;

     displayArray(lottoThree, 3);

     return 0;
}

void displayArray(int myArray[], int arrSize)
{
    for (int i=0; i<arrSize; i++)
        cout << myArray[i] << endl;

}
