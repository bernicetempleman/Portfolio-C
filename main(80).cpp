#include <iostream>

using namespace std;

int main()
{
    int maxRows, maxCols;
    cout << "How many rows: ";
    cin >> maxRows;

    // square so msxRows= maxCols
    maxCols = maxRows;

    for (int row=0; row<maxRows; row++)      // outter loop
    {
        for (int col=0; col<maxCols; col++)  // inner loop
        {
           //cout << (row+1) * (col+1) << " ";
           cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
