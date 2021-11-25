#include <iostream>

using namespace std;

// function prototypes
void menu(int &);   // pass by reference
int getRadius();

// function OVERLOADING
double computeArea(int, double);
int    computeArea(int, int);

void displayArea(int const &, double const &);
void getWidthAndLegth(int &, int &);

int main()
{
    int userChoice;   // what is inside of userChoice??
    int rad;            // to store the return value from the getRadius function
    double circleArea;  // to store the return value from the computeArea function
    int width, length;
    int rectArea;

    cout << "userChoice: " << userChoice << endl;
    do
    {
        menu(userChoice);
        switch(userChoice)
        {
            case 1:
                rad = getRadius();
                circleArea = computeArea(rad,3.1415);
                displayArea(rad, circleArea);
                break;
            case 2:
                getWidthAndLegth(width, length);
                rectArea = computeArea(width,length);
                cout << "rectangle areas: " << rectArea << endl;
                break;
            case 3:
                cout << "Thank you for using COP 1334 Area Calc" << endl;
                break;
            default:
                cout << "Please enter 1, 2, or 3 only!";
        }
    }while(userChoice !=3);

    return 0;
}

int computeArea(int w, int l)
{
    return w * l;
}

void menu(int &userChoice)
{
    cout << "Choose from the following:" << endl;
    cout << "1. Area of a Circle" << endl;
    cout << "2. Area of a Rectangle" << endl;
    cout << "3. Exit" << endl;
    cout << "Your choice: " ;
    cin >> userChoice;
}

int getRadius()
{
    int radius;
    cout << "Enter the radius: ";
    cin >> radius;

    return radius;
}

/*
     Function    : computeArea
     Parameters  : int radius, double Pi
     Returns     : double
     Description : takes in two parameters radius,Pi and radius and
                   computes the area and returns it.
*/

void getWidthAndLegth(int &width, int &length)
{
    cout << "Rectangel width: ";
    cin >> width;

    cout << "Rectangled length: ";
    cin >> length;
}

double computeArea(int radius, double pi)
{
    double area;
    area = pi * radius * radius;
    return area;
}


void displayArea(int const & radius, double const &area)
{
    cout << "Circle with : " << radius
         << " inch radius has : " << area
         << " area" << endl;

}
