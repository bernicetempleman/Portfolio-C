#include <iostream>




using namespace std;




int main()

{

    const int SIZE = 3;



    // set up parallel arrays

    string  carMake[SIZE]   = {"BMW", "Toyota", "Audi"};

    string  carModel[SIZE]  = {"Z4", "Prius", "A3"};

    int     yearMade[SIZE]  = {2014, 2010, 2012};

    double  carMPG[SIZE]    = {28.5, 41.2, 24.5};





    for (int i=0; i< SIZE; i++)

    {

        cout << "my " << carMake[i] << " "

             << carModel[i] << "was made in year "

             << yearMade[i] << "gives me "

             << carMPG[i] << " miles per gallon"

             << endl;



    }



    return 0;

}
