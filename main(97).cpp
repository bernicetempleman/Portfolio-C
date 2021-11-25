#include <iostream>

using namespace std;

int main()
{
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice ==1 )
    {
        cout << fixed << showpoint << setprecision(2);
    }
    else if (choice ==2 || choice == 3)
    {
        cout << fixed << showpoint << setprecision (4);
    }
    else if (choice == 4)
    {
        cout << fixed << showpoint << setprecision (6);
    }
    else
    {
        cout << fixed << showpoint << setprecision(8);
    }

    switch(choice)
    {
        case 1:
            cout << fixed << showpoint << setprecision(2);
            break;
        case 2:
        case 3:
            cout << fixed << showpoint << setprecision (4);
            break;
        case 4:
            cout << fixed << showpoint << setprecision (6);
            break;
        default:
            cout << fixed << showpoint << setprecision(8);

    }

    return 0;
}
