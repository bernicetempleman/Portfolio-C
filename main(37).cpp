/*

    Programmer  :   COP 1334 class

    Date        :   10/27/2014

    Description :   Read integers from a file that is in particular directory

                    C: Desktop\dwade\dev\numbers.txt. Read the integers and

                    compute their average




*/




#include <iostream>

#include <fstream>

#include <cstdlib>




using namespace std;




int main()

{

    int number;       // variable used to capture 1 number from the file

    int sum = 0;      // accumulator of numbers

    int numCount = 0; // accumulator to capture how many numbers we read

    ifstream inputF;

    double avg;       // average sum/numCount




    // open the file

    inputF.open("C:\\users\\azejnilo\\Desktop\\DWade\\Dev\\numbers.txt");

    if(!inputF)

    {

        cout << "Trouble finding the file. Exiting...";

        exit(0);   // may have to call cstdlib header

    }




    //start reading the data from the file

    while(inputF >> number)

    {

       sum = sum + number;

       numCount++;

    }




    // compute the average

    avg = sum/static_cast<double>(numCount);




    cout << "the average is: "  << avg << endl;




    return 0;

}
