#include <iostream>




using namespace std;




int add(int, int);

int subtract(int, int);




int main()

{

    add(5,2);

    subtract(15, 10);



    return 0;

}




int add(int x, int y)

{

   cout << "in the add function" << endl;

   cout << "received x: " << x << endl;

   cout << "received y: " << y << endl;

   return 99;

}




int subtract(int x, int y)

{

   cout << "in the subtract function" << endl;

   cout << "received x: " << x << endl;

   cout << "received y: " << y << endl;

   return 99;

}
