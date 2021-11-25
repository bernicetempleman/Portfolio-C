//=============================================================================
// Programmer    : Adnan Zejnilovic
// Date          : 10/02/2014
// Description   : This program displays a menu with several choices. Once
//                 the user selects a choice, the program then gathers
//                 additional information in order to perform necessary
//                 calculations.
//=============================================================================
#include <iostream>
using namespace std;

int main()
{
	// Constant for pi
	const double PI = 3.14159;

	int choice;		// User's shape choice
	double radius;	// Radius of a circle
	double length;	// Length of a rectangle
	double width;	// Width of a rectangle
	double base;	// Base of a triangle
	double height;	// Height of a triangle
	double area;	// Area of the selected shape


	// Display the menu and get a choice.
	cout << "Geometry Calculator" << endl << endl;
	cout << "1. Calculate the area of a Circle" << endl;
	cout << "2. Calculate the area of a Rectangle" << endl;
	cout << "3. Calculate the area of a Triangle" << endl;
	cout << "4. Quit" << endl << endl;
	cout << "Enter your choice (1-4): ";
	cin >> choice;

	// Respond to the user's menu selection.
	switch (choice)
	{
		case 1:
			cout << "\nEnter the circle's radius: ";
			cin  >> radius;
			if (radius < 0)
				cout << "\nThe radius can not be less than zero.\n";
			else
			{
				area = PI * radius * radius;
				cout << "\nThe area is " << area << endl;
			}
			break;

		case 2:
			cout << "\nEnter the rectangle's length: ";
			cin  >> length;
			cout << "Enter the rectangle's width: ";
			cin  >> width;
			if (length < 0 || width < 0)
			{
				cout << "\nOnly enter positive values for "
					 << "length and width." << endl;
			}
			else
			{
				area = length * width;
				cout << "\nThe area is " << area << endl;
			}
			break;

		case 3:
			cout << "Enter the length of the base: ";
			cin  >> base;
			cout << "Enter the triangle's height: ";
			cin  >> height;
			if (base < 0 || height < 0)
			{
				cout << "\nOnly enter positive values for "
					 << "base and height." << endl;
			}
			else
			{
				area = base * height * 0.5;
				cout << "\nThe area is " << area << endl;
			}
			break;

		case 4:
			cout << "Program ending." << endl;
			break;

		default:
			cout << "The valid choices are 1 through 4. Run the" << endl
				 << "program again and select one of those."
				 << endl;
   }

   return 0;
}
