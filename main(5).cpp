#include <iostream>

using namespace std;

int main()
{
    float x = 1.123f;
    float y = 235f;
    float sum = x + y;

    cout << x<< "+" << y<<" = "<< sum << endl;

    if (sum == 2.358)
        cout << sum<< " is equal to "<< 2.358 <<endl;
    cout << sum << " - " << 2.358 << " = " << sum - 2.358 << endl;

    //fixed displays in non scientific notation
    //cout << fixed; moved to after setprecision

    //set precision & spcify digits applied to result
    cout << setprecision(12) << fixed() <<sun -2.358 << endl;
    cout << "Hello world!" << endl;
    return 0;
}
