#include <iostream>




using namespace std;




const int NUM_COLS = 4;

const int NUM_ROWS = 3;




// function prototypes

void display2DArray(int [][NUM_COLS]);




int main()

{




   // int my1DArray[] = {10, 20, 30, 40, 50};










    int my2DArray[][NUM_COLS] = {

                            {10, 20, 30, 40},

                            {50, 60, 70, 80},

                            {11, 21, 31, 41}

                         };

    display2DArray(my2DArray);




    return 0;

}




void display2DArray(int anArray[][NUM_COLS])

{

    for (int i=0; i<NUM_ROWS; i++)

    {

        for (int j=0; j<NUM_COLS; j++)

        {

            cout << anArray[i][j] << " ";

        }

        cout << endl;

    }




}
