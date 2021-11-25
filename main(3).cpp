#include <iostream>

using namespace std;

int main()
{
    //use formatting to display table of cars and mpg

    cou << left;
    cout << setw(10) << car1
            << setw(22) << car2
            << setw(18) << car3;
    cout << "CAR     MPG" << endl;
    cout << "____________" << endl;

    cout << "Audi    22.9"<< endl;
    cout << "BMW     29.2" << endl;
    return 0;
}
