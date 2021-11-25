#include <cstdlib>
#include <iostream>

using namespace std;

// global constants
const double TAX_PERCENT = 0.065; // 6.5%
const double TIP_PERCENT = 0.15;  // 15%
const int MEAL_COST = 50;         // meal cost

int main(int argc, char *argv[])
{
    // variable that will hold tax
    double tax;
    double tip;   // variable to hold the tip amount
    double total; // ????
    
    tax = MEAL_COST * TAX_PERCENT; // formula to compute the tax on the amount
    
    // compute the tip
    tip = MEAL_COST * TIP_PERCENT;
    
    // compute total
    total = MEAL_COST + tax + tip;
    
    // display results
    cout << "Bill: " << MEAL_COST << endl;
    cout << "Tax: " << tax << endl;
    cout << "Tip: " << tip << endl;
    cout << "Total: " << total << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
