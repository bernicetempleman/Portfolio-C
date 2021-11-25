#include <iostream>
#include <fstream>

//include fstream
// declare ofstream object
//3. process the data & write to file
//4. close the file

using namespace std;

int main()
{
    //2. declare
    ofstream myOutputFile; //ofstream - thhe file OUTPUT onlu

    //3. open the file for writing (dont need to check if it exist- will erase current
    myOutputFile.open("MyFriends.txt"); //notice no path to file, so compiler saves to project dir


    //4 process data & write to it
    for(int i=75; i <=100; i=i+5)
    {
        myOutputFile << i << endl;

    }


    //5 close the file
    myOutputFile.close();

    cout << "Hello world!" << endl;
    return 0;
}
