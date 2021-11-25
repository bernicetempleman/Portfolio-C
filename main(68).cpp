#include <iostream>

using namespace std;

int main()
{
    /*
    1. initialization
    2. test
    3. Execute statement(s)
    4. Update
    int x = 10;    // 1. initialization
    while (x < 10) // 2. test
    {
        statement(s) // 3. execute
        x = x+1;     // update
    }

    */
    // Syntax for a "for" loop
    /*
    for (<1. initialization;><2. test>; <4. update>)
    {
       3. statement(s);
    }


    for (int i=0; i<10; i++)   <<--- No semicolon!!!
    {
       cout << "Hello " << endl;
    }
    */
     for (int i=0; i<10; i++)
     {
        cout << "For Loop "
             << "i = " << i << endl;
     }

     // rewrite as the while loop
     int i=0;  // initialization
     while(i<10)
     {
        cout << "While loop "
             << "i = " << i << endl;
        i++;
     }



    return 0;
}
