#include <iostream>




using namespace std;




void displayValue();

int displayValue(int );




int main()

{




    // use static local variables

    for(int i=0; i<5; i++)

    {

        displayValue();

    }




    cout << "HEre it is with overloaded function" << endl;

    // write an overloaded function to do the same

    int retVal=0;

    for(int i=0; i<5; i++)

    {

        retVal = displayValue(retVal);

        cout << "This is retVal: " << retVal << endl;

    }




    return 0;

}




int displayValue(int value)

{

   value = value + 1;

   return value;

}




void displayValue()

{

    static int x;

    x+=1;

    cout << "This is x: " << x << endl;

}
