#include <iostream>

using namespace std;

int main()
{
    int custCount = 0;    // "counter"
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
            custCount++;
    }

    cout << custCount << " customers visited the store today " << endl;
    return 0;
}
