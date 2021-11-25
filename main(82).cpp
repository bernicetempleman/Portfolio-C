#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Please enter a number and I will determine whether it is EVEN or ODD";
    cin >> number;

    // test to determine whether it is even
    if (number % 2 == 0)
    {
        cout << number << " is EVEN" << endl;
    }
    else if(number % 2 == 1)
    {
        cout << number << " is ODD" << endl;
    }
    return 0;
}
