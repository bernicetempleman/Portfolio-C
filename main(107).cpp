#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int number;          // to hold student score
    int maxNum = 0,
        minNum = 600;

    string filePath;   // to hold the string with file path and file name

    ifstream myFile;   // declared a variable of ifstream object type
                       // input only

    // ask the user to provide file name and location
    //cout << "Please enter your data file path: ";
    //getline(cin, filePath);
    //myFile.open(filePath.c_str());
    myFile.open("C:\\users\\azejnilo\\DEsktop\\RandomData.txt");

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

    while(myFile >> number)
    {
        if (number >= maxNum)
           maxNum = number;
        if (number <= minNum)
           minNum = number;
    }

    // 4. close the file
    myFile.close();

    cout << "MAX : " << maxNum << endl;
    cout << "MIN : " << minNum << endl;
    return 0;
}
