#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int score;
    string filePath;  //hold string with file path & name

    ifstream myFile;

    cout <<"enter data path";
    getline (cin,filePath);


    //ask user
    myFile.open( filePath.c_str());

    //defensive programming
    if (!myFile)
    {
        cout << "error"";
    }

    //while loop



    cout << "Hello world!" << endl;
    return 0;
}
