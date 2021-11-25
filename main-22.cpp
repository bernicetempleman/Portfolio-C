#include <iostream>
#include <fstream>    // 1. include fstream

using namespace std;

int main()
{
    // 2. declare ofstream object
    ofstream myOutputFile;     // ofstream - the file OUTPUT only

    // 3. Open the file for writing
    myOutputFile.open("MyTestScores.txt");  // notice, there is no path to the
                                        // file. So the compiler in this case
                                        // will save the file in the project
                                        // directory

    // 4. process the data and write it to the file
    for(int i=50; i<=100; i=i+5)
    {

        myOutputFile << i << endl;   // directs to file
    }
    // 5. close the file
    myOutputFile.close();

    return 0;
}
