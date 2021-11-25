#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int score;          // to hold student score
    string filePath;   // to hold the string with file path and file name

    ifstream myFile;   // declared a variable of ifstream object type
                       // input only

    // ask the user to provide file name and location
    cout << "Please enter your data file path: ";
    getline(cin, filePath);
    myFile.open(filePath.c_str());

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
