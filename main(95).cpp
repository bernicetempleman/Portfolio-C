#include <iostream>
#include <iomanip>   // this header is used for formatting numeric info

using namespace std;

int main()
{
    float x = 1.123f;
    float y = 1.235f;
    float sum = x + y;

    cout << x << " + " << y << " = " << sum << endl;
    if (sum == 2.358)
        cout << sum << " is EQ to " << 2.358 << endl;

    //cout << fixed;  // calling iomanip to the rescue
    cout << sum << " - " << 2.358 << " = "
         << setprecision(10)
         << fixed
         << sum - 2.358 << endl;
    return 0;
}
