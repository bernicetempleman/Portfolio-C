#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int number;          // to hold student score


    string filePath;   // to hold the string with file path and file name

    ifstream myFile;   // declared a variable of ifstream object type
                       // input only

    myFile.open("CesarCipher.txt");

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

    // G E R M A N I C U S
    // 0 1 2 3 4 5 6 7 8 9

    // declare a file for output
    ofstream outputF;
    outputF.open("DeCipher.txt");

    char ch;    // to read a single character
    while(myFile.get(ch))
    {
        switch(ch)
        {
            case '0':
                outputF.put('G');
                break;
            case '1':
                outputF.put('E');
                break;
            case '2':
                outputF.put('R');
                break;
            case '3':
                outputF.put('M');
                break;
            case '4':

                outputF.put('A');
                break;
            case '5':
                outputF.put('n');
                break;
            case '6':
                outputF.put('i');
                break;
            case '7':
                outputF.put('c');
                break;
            case '8':

                outputF.put('u');
                break;
            case '9':


                outputF.put('S');
                break;
            default:
                outputF.put(ch);
        }

    }

    // 4. close the file
    myFile.close();
    outputF.close();
    return 0;
}
