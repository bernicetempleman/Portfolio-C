// Programmer: Bernice Templeman
//
// Finish & add 2 more functions to ICW lunch program
// return Day Spent most
// return day spent least

#include <iostream>

using namespace std;

// function prototypes
void menu(int &);
double sum(double [], int );
double avg(double [], int );
double mostExpensive(double [], int );
double leastExpensive(double[], int);
int mostExpensiveDay(double [], int );
int leastExpensiveDay(double [], int );
void displayAll(double [], int);


int main()
{
    const int SIZE = 5;

    int userChoice;      // local to main program
                         // menu function will change it

    double lunch[SIZE] = {17.65, 21.88,7.80, 12.15, 22.75};
    do
    {
        menu(userChoice);
        switch(userChoice)
        {
            case 1:
                cout << "Your total weekly lunch spending is: "
                     << sum(lunch, SIZE)
                     << endl;
                break;
            case 2:
                cout << "The most expensive lunch is: "
                     << mostExpensive(lunch, SIZE)
                     << endl;
                break;
            case 3:
                cout << "The least expensive lunch is: "
                     << leastExpensive(lunch, SIZE)
                     << endl;
                break;
            case 4:
                cout << "Your average weekly lunch spending is: "
                     << avg(lunch, SIZE)
                     << endl;
                break;
            case 5:
                cout << "Here are your weekly lunches: " << endl;
                displayAll(lunch, SIZE);

                break;
            case 6:
                cout << "The most expensive day is: "
                     << mostExpensiveDay(lunch, SIZE)
                     << endl;
                break;
            case 7:
                cout << "The least expensive day is: "
                     << leastExpensiveDay(lunch, SIZE)
                     << endl;
                break;
            case 8:
                cout << "Thank you for using LEA Program" << endl;
                break;
            default:
                cout << "Please enter 1, 2, 3, 4, 5, or 6 only" << endl;
        }

    }while (userChoice != 8);
    return 0;
}

//returns most expensive meal
double mostExpensive(double myLunches[], int arrSize)
{
    double maxLunch = myLunches[0];
    for (int i=1; i<arrSize; i++)
    {
        if (myLunches[i] > maxLunch)
            maxLunch = myLunches[i];
    }

    return maxLunch;
}

//Programmer: Bernice Templeman
//returns least expensive meal
double leastExpensive(double myLunches[], int arrSize)
{
    double minLunch = myLunches[0];
    for (int i=1; i<arrSize; i++)
    {
        if (myLunches[i] < minLunch)
            minLunch = myLunches[i];
    }

    return minLunch;
}

//Programmer: Bernice Templeman
// returns most expensive day
//(adds 1 to adjust for array beginning at 0)
int mostExpensiveDay(double myLunches[], int arrSize)
{
    int maxDay = 0;
    double maxLunch = myLunches[0];

    for (int i=1; i<arrSize; i++)
    {
        if (myLunches[i] > maxLunch)
         {
            maxLunch = myLunches[i];
            maxDay = i;
         }
    }

    return maxDay + 1;
}

// Programmer: Bernice Templeman
// returns least expensive day
//(adds 1 to adjust for array beginning at 0)
int leastExpensiveDay(double myLunches[], int arrSize)
{
    int minDay = 0;
    double minLunch = myLunches[0];

    for (int i=1; i<arrSize; i++)
    {
        if (myLunches[i] < minLunch)
        {
            minLunch = myLunches[i];
            minDay = i;
        }
    }

    return minDay +1;
}

//Programmer: Bernice Templeman
//Displays all days and amounts
//(adds 1 to adjust for array beginning at 0)
void displayAll(double lunchArray[], int arrSize )
{
    for (int i = 0; i <arrSize; i++)
    {
        cout << "Day "
        << i + 1
        << " : "
        <<lunchArray[i] << endl;
    }
}

//returns average amount spent
double avg(double myLunches[], int arrSize)
{
   double avg;
   avg = sum(myLunches, arrSize)/arrSize;
   return avg;
}

//returns total spent for week
double sum(double myLunches[], int arrSize)
{
   double sum=0;
   for (int i=0; i<arrSize; i++)
   {
      sum = sum + myLunches[i];
   }

   return sum;
}

//displays menu
void menu(int &uC)
{
    cout << "1. Total amount spent the entire week " << endl;
    cout << "2. Most expensive lunch" << endl;
    cout << "3. Least expensive lunch " << endl;
    cout << "4. Average spending per week" << endl;
    cout << "5. Display all lunches" << endl;
    cout << "6. Most expensive Day" << endl;
    cout << "7. Least expensive Day" << endl;
    cout << "8. exit " << endl;
    cout << "Your choice: ";
    cin >> uC;
}
