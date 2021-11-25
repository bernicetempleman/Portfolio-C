#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float DELTA = 0.0000001; // represents the difference
                                  // between sum (2.257) and 2.275 (float literal)

    float x = 1.125f;
    float y = 1.132f;
    //        2.257
    float sum;          // to hold x + y



    sum = x + y;

    cout << "the sum is: " << sum << endl;

    // this is not how you compare floats
    if (sum == 2.257)
      cout << sum << " is EQUAL to : " << 2.257 << endl;

    cout << "SUM : " << sum << endl;
    cout << "the literal 2.257 : " << 2.257 << endl;

    // the next statement computes the difference between  the sum and
    // what computer reported
    cout << "The difference is: " << fabs(sum - 2.257) << endl;

    //with the DELTA, we can compare floats in a different (CORRECT) way
    if (fabs(sum-2.257) <= DELTA)
        cout << sum << " is EQ to " << 2.257 << endl;

    return 0;
}
