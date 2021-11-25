#include <iostream>




using namespace std;




int main()

{

 /*

    // declare a 2D array

    int airlineSeats[5][3];




    // populate array with data

    airlineSeats[0][0] = 550;

    airlineSeats[0][1] = 500;

    airlineSeats[0][2] = 600;




    airlineSeats[1][0] = 450;

    airlineSeats[1][1] = 470;

    airlineSeats[1][2] = 490;




    airlineSeats[2][0] = 350;

    airlineSeats[2][1] = 370;

    airlineSeats[2][2] = 390;




    airlineSeats[3][0] = 350;

    airlineSeats[3][1] = 370;

    airlineSeats[3][2] = 390;




    airlineSeats[4][0] = 350;

    airlineSeats[4][1] = 370;

    airlineSeats[4][2] = 390;

*/




    int airlineSeats[5][3] = {

                              {550, 500, 600},  // row 0

                              {450, 470, 490},  // row 1

                              {350, 370, 390},  // row 2

                              {250, 270, 290},  // row 3

                              {150, 170, 190},  // row 4

                            };




    cout << "Available airline seating: " << endl;

    for (int row = 0; row<5; row++)

    {

        for (int col =0; col < 3; col++)

        {

            cout << airlineSeats[row][col] << " ";




        }

        cout << endl;

    }




    return 0;

}
