#include <iostream>

using namespace std;

const int SIZE = 5;

int main()
{
    // comparing integers
    int x = 30,
        y = 20;

    if (x > y)
        cout << x << " is GT " << y << endl;
    else if (x == y)
        cout << x << " is EQ " << y << endl;
    else
        cout << x << " is LT " << y << endl;

    // compare arrays
    int myArray[SIZE] = {1, 2, 3, 4, 5};
    int yourArray[SIZE] = {1, 2, 3, 4, 5};

    // are these two arrays equal?
    // This is NOT the way to compare two arrays
    // This only compares their addresses
    if (myArray == yourArray)
        cout << "Arrays are EQUAL" << endl;
    else
        cout << "Arrays are NOT EQUAL" << endl;

    // the correct way to compare two arrays is to compare each member
    // "memberwise comparison"
    bool isEqual = true;

    for (int i=0; i<SIZE; i++)
    {
        if (myArray[i] != yourArray[i])
        {
            isEqual = false;
            break;
        }
    }

    if (isEqual)
       cout << "Arrays are EQUAL" << endl;
    else
        cout << "Arrays are NOT EQUAL" << endl;


    return 0;
}
