#include <iostream>
#include <string>

using namespace std;

// constants section

// GLOBAL VARIABLES
string message = "MORNING";

// function prototypes
void goodMorning(string );
void goodEvening(string );
void goodAfternoon(string );

int main()
{
    string morning = "MORNING";
    string afternoon = "AFTERNOON";
    string evening = "EVENING";

    cout << "GLOBAL MESSAGE IS : " << message << endl;
    goodMorning(morning);
    goodMorning(morning);

    return 0;
}

void goodMorning(string msg)
{

   cout << "in GM: received this message: " << msg  << endl;
   cout << "in GM: GLOBAL MESSAGE: " << message << endl;
   cout << "Good " << msg << endl;
   message = "HORRIBLE" ;

}

void goodAfternoon(string msg)
{
   cout << "Good " << msg << endl;
}

void goodEvening(string msg)
{
   cout << "Good " << msg << endl;
}
