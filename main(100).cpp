#include <iostream>

using namespace std;

int main()
{
    int custCount = 0;    // "counter"
    int dailySales = 0;   // "accumulator"
    int saleAmount;
    bool isOpen = true;   // the store is open
    char yesNo;

    while (isOpen)
    {
        cout << "Customer Count: " << custCount << endl;

        cout << "Is it time to close the store? <y/n>: ";
        cin >> yesNo;

        if (yesNo == 'Y' or yesNo == 'y')
            isOpen = false;
        else
        {
            custCount++;  // increment customer count
            cout << "How much did you spend : ";
            cin >> saleAmount;
            dailySales = dailySales + saleAmount;   // accumulate
        }
    }

    cout << custCount << " customers visited the store today " << endl;
    cout << "Daily sales " << dailySales << endl;
    return 0;
}
