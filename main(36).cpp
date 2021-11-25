#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    string lineOfText;

    ifstream inputF; //this will be associated with input data
    inputF.open("NBA.csv");
    if (!inputF)
    {
        cout << "no fil... exiting" <<endl;
        exit(EXIT_FAILURE); //cstdlib
    }

   // string myString ="";

    //process file... read while there is data
    while (!inputF.eof())
    {
        //with delimiter
        getline(inputF, lineOfText,',');
       // myString += myString + '\t';
        cout <<lineOfText + '\t';
      //  cout << "I read: "<< lineOfText << endl;
    }

    //close file
    inputF.close();

    //cout << "Hello world!" << endl;
    return 0;
}
