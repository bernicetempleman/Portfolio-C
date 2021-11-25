#include <iostream>

using namespace std;

int main()
{

    /*
    for (1.initialization; 2.test; 4.update)
    {
        3. statement(s)
    }
    */
    for (int i=0; i<5; i++)
    {
        cout << "<FOR LOOP>Hello, COP 1334\n";
    }


    // 1. initialization
    // 2. while (test)  T/F
    // 3. execution of statement(s)
    // 4. update
    int i=0;   // 1. intialization
    while(i<5) // 2. test
    {
        // 3. execution
        cout << "<WHILE LOOP>Hello, COP 1334\n";

        // 4. update
        i++;
    }



    return 0;
}
