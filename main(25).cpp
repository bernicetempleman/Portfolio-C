//https://etherpad.mozilla.org/COP1334-MW

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




    myFile.open("C:\\users\\azejnilo\\DEsktop\\Original.txt");




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

    outputF.open("CesarCipher.txt");




    char ch;    // to read a single character

    while(myFile.get(ch))

    {

        switch(ch)

        {

            case 'G':

            case 'g':

                outputF.put('0');

                break;

            case 'E':

            case 'e':

                outputF.put('1');

                break;

            case 'R':

            case 'r':

                outputF.put('2');

                break;

            case 'M':

            case 'm':

                outputF.put('3');

                break;

            case 'A':

            case 'a':

                outputF.put('4');

                break;

            case 'N':

            case 'n':

                outputF.put('5');

                break;

            case 'I':

            case 'i':

                outputF.put('6');

                break;

            case 'C':

            case 'c':

                outputF.put('7');

                break;

            case 'U':

            case 'u':

                outputF.put('8');

                break;

            case 'S':

            case 's':

                outputF.put('9');

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
