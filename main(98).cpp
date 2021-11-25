#include <iostream>

using namespace std;

int main()
{
    /* the syntax for a decision statement
    if (expression)
    {
        statement(s);
    }
    */

    /* Syntax for a simple while loop
    while (expression)
    {
        statement(s);
    }
    */

    int x = 0;
    while (x<10)       // the variable x is aka "loop control" variable
    {
        cout << "hello COP 1334" << endl;
        x = x + 1;
    }

    // where is the test taking place
    // pre-test loop
    x = 10;
    while (x<10)       // the variable x is aka "loop control" variable
    {
        cout << "x : " << x << endl;
        x = x + 1;
    }


    return 0;
}
