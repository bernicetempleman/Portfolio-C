#include <iostream>
#include <cstdlib> //exit failure &
#include <fstream>

using namespace std;

int main()
{
    //file can be used either for reading from it or writing to it


    //declare a file for input
    //use ifstream

    int score;

    ifstream myFile; //like  int x (variable of data type ifstream (ifstream is an object))

                    //input only

    // 1. declare a file for input - use ifstream
    // 2. determine whether the file exists and open it
    // 3. the file exists, we can process
    // 4. close the file myFile.close();
    // for input: always test if file exists

    myFile.open("C:\\users\\bernice.templeman001\\Desktop\\StudentScores.txt");

    //defensive programming practice
    if(!myFile)
    {

        cout << "Error! Trouble locating input file..."<< endl;
        cout << "Exiting...."<< endl;
        exit(EXIT_FAILURE); //use with caution, very dangerous function

    }

//if file exists , we can start to process it
// cin>> score;  if reading from keyboard buffer
// use file handle

myFile >> score;
while (myFile >> score)
{
    cout << "I read: " << score << endl;
}


myFile.close();


    cout << "Hello world!" << endl;
    return 0;
}
