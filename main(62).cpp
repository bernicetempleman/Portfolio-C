#include <iostream>

#include <iomanip>




using namespace std;

 int TotalRevenue(int [],int[],int );

 string MostSold(int [],string [],int );

 string LeastSold(int [],string [],int );

 void Display(int [],string [],int );







int main()

{

    const int SIZE=5;

    string salsa[SIZE]={"Mild","Medium","Sweet","Hot","Zesty"};

    int cost[SIZE]={2,2,3,4,5};

    int jars[SIZE];




    for (int i=0;i<SIZE;i++)

    {

        int amount;

        cout<<"How may jars of salsa "<<salsa[i]

        <<" did you sale? :";

        cin>>amount;

        jars[i]=amount;

    }







    Display(jars,salsa,SIZE);

    cout<<"The total revenue is :" <<TotalRevenue(cost,jars,SIZE)<<endl;

    cout<<"The most sold is :" <<MostSold(jars, salsa,SIZE)<<endl;

    cout<<"The least sold is :" <<LeastSold(jars, salsa,SIZE)<<endl;




    return 0;

}




    int TotalRevenue(int cost[],int jars[],int SIZE)

    {

        int amount=0;

        for (int i=0;i<SIZE;i++)

        {

            amount+=cost[i]*jars[i];

        }

        return amount;

    }

    string MostSold(int jars[],string salsa[],int SIZE)

    {

        int index=0;

        int most=jars[0];

        for (int i=0;i<SIZE;i++)

        {

            if(most<jars[i])

            {

                most=jars[i];

                index=i;

            }

        }

        return salsa[index];

    }

     string LeastSold(int jars[],string salsa[],int SIZE)

    {

        int index=0;

        int least=jars[0];

        for (int i=0;i<SIZE;i++)

        {

            if(least>jars[i])

            {

                least=jars[i];

                index=i;

            }

        }

        return salsa[index];

    }

    void Display(int jars[],string salsa[],int SIZE)

    {

        cout<<"Salsa       Jars"<<endl;

        for (int i=0;i<SIZE;i++)

        {

            cout<<salsa[i]<<"      "<<jars[i]<<endl;

        }

    }
