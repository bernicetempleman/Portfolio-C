#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<10; i++)
    {
        if (i%2 == 0)
        {
           continue;  // skip an iteration
           cout << i << " is EVEN" << endl;

        }
        else
           cout << i << " is ODD" << endl;

    }
    return 0;
}
