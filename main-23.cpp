#include <iostream>
#include <cstdlib>     // for exit function - i.e. EXIT_FAILURE
#include <fstream>     // used for input/output files


using namespace std;

int main()
{
    int score;  // to hold student score

    // file can be used either for reading from it
    // or writing to it

    // 1. declare a file for input - use ifstream
    ifstream myFile;   // declared a variable of ifstream object type
                       // input only

    // 2. determine whether the file exists and open it
    myFile.open("C:\\users\\azejnilo\\Desktop\\StudentScores.txt");

    // defensive programming practice
    if (!myFile)
    {
        cout << "Error! Trouble locating input file... " << endl;
        cout << "Exiting...." << endl;
        exit(EXIT_FAILURE);   // use with caution, very dangerous function
    }

    // 3. the file exists, we can start to process it.
    // cin >> score;   you would do this if you were reading from the
    //                 the keyboard buffer.

    while(myFile >> score)
    {
       cout << "I read: " << score << endl;
    }

    // 4. close the file
    myFile.close();

    return 0;
}
