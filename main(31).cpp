#include <iostream>




using namespace std;




// function prototypes

void arrayCopy(const string [], string [], int );

void displayArrays(const string [], const string [], int );




int main()

{

    const int SIZE = 5;

    string myFriends[SIZE] = {"Dwyane", "LeBron", "Cris", "Mario", "Shakira"};

    string yourFriends[SIZE];




    // copy myFriends to yourFriends

    // REfresher: How to copy contents of an integer variable into another

    //            integer variable

    int x = 10;

    int y;




    y = x;




    cout << "This is x: " << x << endl;

    cout << "This is y: " << y << endl;




    // how would I copy 2 arrays

    // yourFriends = myFriends;   // this will NOT WORK!!!!




    // what works is memberwise copy

    /*

    for (int i=0; i< SIZE; i++)

    {

        yourFriends[i] = myFriends[i];

    }

    */

    arrayCopy(myFriends, yourFriends, SIZE);




    // display yourFriends array

    /*

    for (int i=0; i< SIZE; i++)

    {

        cout << "Your Friends: " << yourFriends[i] << endl;

    }

    */

    displayArrays(myFriends, yourFriends, SIZE);




    return 0;

}




void displayArrays(const string sourceArr[], const string destinationArr[], int arrSize)

{

    for (int i=0; i< arrSize; i++)

    {

        cout << "myFriend: " << sourceArr[i] << " is also your friend "

             << destinationArr[i] << endl;

    }



}




void arrayCopy(const string sourceArr[], string destinationArr[], int arrSize)

{

    for (int i=0; i< arrSize; i++)

    {

        destinationArr[i] = sourceArr[i];

    }

}
