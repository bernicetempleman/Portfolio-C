#include <iostream>




using namespace std;




// Function prototypes

//void displayValues(int, int );
//can put defaults
//returns negative number -99 when called without parameters
void displayValues (int=-99, int=-99);

//overloading is different parameters(defaults arent overloading




int main()

{

    int a=10;

    int b=20;




    displayValues(a, b); //call with proper args
    displayValues(); //no args
    displayValues(a); //only first
    //displayValues(,a); can't skip first arg

    return 0;

}




void displayValues(int x, int y)

{

    cout << "x: " << x << endl;

    cout << "y: " << y << endl;

}
