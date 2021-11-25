/***********************************************
 * Programmer : Bernice Templeman
 * COP 2335
 * Ex.02      : Customer Service Portal
 * Date Due   : 5:40PM, February 26th, 2015
 * Description:
 * Write a program that uses a structure
 * to store the following data about a customer account:
        • Name
        • Address (number, street name, unit number if any)
        • City, State, and ZIP
        • Telephone Number
        • Account Balance
        • Date of Last Payment

 * The structure should be used to store customer account records in a binary ﬁle.
 * The program should have a menu that lets the user perform the following operations:
        1. Enter new records into the file. (Create New Customer Account)
        2. Search for a particular customer’s record and display it. (Display Customer Account)
        3. Search for a particular customer’s record and delete it. (Delete Customer Account)
        4. Search for a particular customer’s record and change it. (Change Customer Account)
        5. Display the contents of the entire file. (Display All Customer Accounts)
        6. Exit
 * When searching for a particular customer record, search by name (or portion of a name).
 * Hint: You may want to brush up on string functions (strstr, etc).
 * Input Validation:
        When the data for a new account is entered,
        be sure the user enters data for all the ﬁelds.
        No negative account balances should be entered.
 * Submit your work as Ex.02-LastNameFirstNameInitial.cpp - i.e. Ex.02-ZejnilovicA.cpp
 *
 **********************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <strings.h>
#include <string.h>
#include <stdio.h>

using namespace std;

//constants
const int NUM_RECORDS = 10;
const int NAME_SIZE = 51;
const int ADDR_SIZE = 51;
const int PHONE_SIZE = 14;
const int DATE_SIZE = 11;

struct Account
{
   char name[NAME_SIZE];                // Name
   char address1[ADDR_SIZE];            // Address (number, street name, unit number if any)
   char address2[ADDR_SIZE];            // City, State, and ZIP
   char phone[PHONE_SIZE];              // Telephone Number
   double balance;                      // Account Balance
   char LastPaymentDate[DATE_SIZE];     // Date of Last Payment
};

//function prototypes

//openFile();
int displayMenu();
void enterRecord();
void displayRecord();
void deleteRecord();
void updateRecord();
void displayAllRecords();
long byteNum(int);;


// void displayFile();

int main()
{
    int choiceInt;

    //check for file existence before opening it
    fstream accounts;
    accounts.open("accounts.dat", ios::in | ios::binary);
    if(accounts.fail())
    {
        //the file DNE so create it.
        accounts.open("accounts.dat", ios::out | ios::binary);

        //create an empty account struct
        Account record = {"","","","",0.0,""};

        //write blank records to the file
        for(int count = 0; count < NUM_RECORDS; count++)
        {
            accounts.write(reinterpret_cast<char *>(&record),sizeof(record));
        }
    }
    //close the file
    accounts.close();

    //open the binary file for input and output
    accounts.open("accounts.dat", ios::in | ios::out | ios::binary);

    //test for errors
    if (!accounts)
    {
        cout << "Error opening file. Exiting...\n"<<endl;
        return 0;
    }

    //variable declarations
    string name1;
    char *pchar;
    Account record;
    char correctRecord;


    do{
    choiceInt = displayMenu();

    cout << "user choice: " << choiceInt <<endl<<endl;

    switch (choiceInt)
    {
    case 1:     // Enter new records
        accounts.close();
        enterRecord();
        accounts.clear();
        accounts.open("accounts.dat", ios::in | ios::out | ios::binary);
        break;//case 1

    case 2:     // display
        accounts.close();
        displayRecord();
        accounts.open("accounts.dat", ios::in | ios::out | ios::binary);
        break;//case 2

    case 3:
        // delete
        accounts.close();
        deleteRecord();
        accounts.open("accounts.dat", ios::in | ios::out | ios::binary);
        break;

    case 4:     // Update
        accounts.close();
        updateRecord();
        accounts.open("accounts.dat", ios::in | ios::out | ios::binary);
        break;//end case 4

    case 5:     // display all
        accounts.close();
        displayAllRecords();
        accounts.open("accounts.dat", ios::in | ios::out | ios::binary);
        break;

    case 6:     // exit
        cout <<"Exiting"<< endl;
        break;

    }
    }while(choiceInt !=6);

    //close the file
    accounts.close();

    cout << "Thank You." << endl;
    return 0;
}
//****************************************************
void openFile()
{

}
//****************************************************
int displayMenu()
{
    char choice;
    int choiceInt = 0;

    do{

    cout << "\n\n1. Enter new records into the file.\n"
            << "    (Create New Customer Account) " << endl;
    cout << "2. Search for a particular customer's record and display it.\n"
            <<"    (Display Customer Account)" << endl;
    cout << "3. Search for a particular customer's record and delete it.\n"
            << "    (Delete Customer Account)" << endl;
    cout << "4. Search for a particular customer's record and change it.\n"
            <<"    (Change Customer Account)"<< endl;
    cout << "5. Display the contents of the entire file. \n"
        << "    (Display All Customer Accounts)" << endl;
    cout << "6. Exit " << endl;
    cin >> choice;
    cin.sync();
    cin.clear();
    switch (choice)
    {
    case '1':
        choiceInt =1;
        break;
    case '2':
        choiceInt = 2;
        break;
    case '3':
        choiceInt = 3;
        break;
    case '4':
        choiceInt = 4;
        break;
    case '5':
        choiceInt = 5;
        break;
    case '6':
        choiceInt = 6;
        break;
    default:
        cout << "Invalid Choice" << endl;
        break;

    }
    }while (choiceInt == 0);
    return choiceInt;
}
//****************************************************
long byteNum(int recNum)
{
    return sizeof(Account) * recNum;
}
//****************************************************
void enterRecord()
{
    Account record;
    char again;
    bool found;
    char *pchar;

    fstream accounts;

accounts.clear();
    accounts.open("accounts.dat", ios::in | ios::out | ios::binary);
    accounts.read(reinterpret_cast<char *>(&record),sizeof(record));

    do
    {
        found = false;
        //check for available record
        while(!accounts.eof() && !found)
        {
            cout << "check availability"<< endl;
            if(strlen(record.name) == 0)
            {
                //move back to beginning of current record
                accounts.seekg(byteNum(-1),ios::cur);


                found = true;
            }
            if (!found)
                accounts.read(reinterpret_cast<char *>(&record),sizeof(record));

        }
        //found or eof


        cout << "found: "<< found;

        if (!found)
        {
            accounts.seekg(0L, ios::end);
            cout <<"writing to eof"<< endl;
        }



        cout << "Enter a new record\n";
        cout << "Enter the  following data: ";
                cout << "Name: ";
                cin.getline(record.name,NAME_SIZE);
                cout << "Address (number street): ";
                cin.getline(record.address1,ADDR_SIZE);
                cout << "City, State ZIP: ";
                cin.getline(record.address2,ADDR_SIZE);
                cout << "Phone: ";
                cin.getline(record.phone,PHONE_SIZE);
                cin.sync();
                cin.clear();
                cout << "Balance: ";
                cin >>record.balance;
                cin.sync();
                cin.clear();
                cout << "Last Payment Date: ";
                cin.getline(record.LastPaymentDate,DATE_SIZE);



                accounts.write(reinterpret_cast<char *>(&record),sizeof(record));

        cout << "Do you want to enter another record? y or n:  ";
        cin >> again;
        cin.ignore();
        cin.clear();

    }while(again == 'Y'|| again =='y');

    accounts.close();
    return;

}

//****************************************************

void displayRecord()
{
    Account record;
    string name1;
    char *pchar;
    char correctRecord;
    fstream accounts;

    accounts.open("accounts.dat", ios::in | ios::out | ios::binary);

    cin.sync();
    cin.clear();

    cout << "enter name to display";
    getline(cin, name1);

    cout << name1<<endl;

    accounts.read(reinterpret_cast<char *>(&record),sizeof(record));

    //search array for name
    while(!accounts.eof())
    {
        pchar = strstr(record.name,name1.c_str());

        if( pchar != NULL )
        {
            cout << "Name: ";
            cout << record.name <<endl;
            cout << "Address: " ;
            cout << record.address1 << endl;
            cout << "Address: ";
            cout << record.address2 << endl;
            cout << "Phone: ";
            cout << record.phone << endl;
            cout << "Balance: ";
            cout << record.balance << endl;
            cout << "Last Payment: ";
            cout << record.LastPaymentDate <<endl;
        }//end if
        accounts.read(reinterpret_cast<char *>(&record),sizeof(record));
    }//END WHILE
    accounts.close();
    return;
}

//****************************************************

void deleteRecord()
{

    Account record;
    string name1;
    char *pchar;
    char correctRecord;

    fstream accounts;

    accounts.open("accounts.dat", ios::in | ios::out | ios::binary);

    cin.sync();
    cin.clear();

    cout << "enter name to delete";
    getline(cin, name1);

    cout << name1<<endl;

    //search array for name
    accounts.seekg(byteNum(0),ios::beg);

    accounts.read(reinterpret_cast<char *>(&record),sizeof(record));

    while(!accounts.eof())
    {
        pchar = std::strstr(record.name,name1.c_str());

        if( pchar != NULL)
        {
            cout << "Name: ";
            cout << record.name <<endl;
            cout << "Address: " ;
            cout << record.address1 << endl;
            cout << "Address: ";
            cout << record.address2 << endl;
            cout << "Phone: ";
            cout << record.phone << endl;
            cout << "Balance: ";
            cout << record.balance << endl;
            cout << "Last Payment: ";
            cout << record.LastPaymentDate <<endl;

            do
            {
                cout << "\n\nIs this the record you want to delete? y or n: ";
                cin >> correctRecord;
                cin.sync();
                cin.clear();
            }while (!(correctRecord == 'y'|| correctRecord =='n'));

            if (correctRecord == 'y')
            {
                //move back to beginning of current record
                accounts.seekg(byteNum(-1),ios::cur);

                record.name[0]= '\0';
                record.address1[0] = '\0';
                record.address2[0]='\0';
                record.phone[0]='\0';
                record.balance = 0.0;
                record.LastPaymentDate[0]='\0';

                cout <<"Record deleted"<<endl;

                accounts.write(reinterpret_cast<char *>(&record),sizeof(record));
            }//end if correct record
        }//end if not NULL
        accounts.read(reinterpret_cast<char *>(&record),sizeof(record));
    }//end while not eof

    accounts.close();
    return;
}

//****************************************************

void updateRecord()
{

    Account record;
    string name1;
    char *pchar;
    char correctRecord;
    fstream accounts;

    cin.sync();
    cin.clear();

    accounts.open("accounts.dat", ios::in | ios::out | ios::binary);

    cout << "enter name to update";
    getline(cin, name1);

    cout << name1<<endl;

    //search array for name
    accounts.seekg(byteNum(0),ios::beg);

    accounts.read(reinterpret_cast<char *>(&record),sizeof(record));

    while(!accounts.eof())
    {
        pchar = std::strstr(record.name,name1.c_str());

        if( pchar != NULL)
        {
            cout << "Name: ";
            cout << record.name <<endl;
            cout << "Address: " ;
            cout << record.address1 << endl;
            cout << "Address: ";
            cout << record.address2 << endl;
            cout << "Phone: ";
            cout << record.phone << endl;
            cout << "Balance: ";
            cout << record.balance << endl;
            cout << "Last Payment: ";
            cout << record.LastPaymentDate <<endl;

            do
            {
                cout << "\n\nIs this the record you want to update? y or n: ";
                cin >> correctRecord;
                cin.sync();
                cin.clear();
            }while (!(correctRecord == 'y'|| correctRecord =='n'));


            if (correctRecord == 'y')
            {
                //move back to beginning of current record
                accounts.seekg(byteNum(-1),ios::cur);
                cin.sync();
                cin.clear();

                cout << "Enter the  following data: "<<endl;
                cout << "Name: ";
                cin.getline(record.name,NAME_SIZE);
                cout << "Address (number street): ";
                cin.getline(record.address1,ADDR_SIZE);
                cout << "City, State ZIP: ";
                cin.getline(record.address2,ADDR_SIZE);
                cout << "Phone: ";
                cin.getline(record.phone,PHONE_SIZE);
                cout << "Balance: ";
                cin >>record.balance;
                cin.sync();
                cin.clear();
                cout << "Last Payment Date: ";
                cin.getline(record.LastPaymentDate,DATE_SIZE);

                accounts.write(reinterpret_cast<char *>(&record),sizeof(record));
            }
        }
        accounts.read(reinterpret_cast<char *>(&record),sizeof(record));
    }
    accounts.close();
    return ;
}
//****************************************************
void displayAllRecords()
{
    Account record;
    fstream accounts;

    accounts.open("accounts.dat", ios::in | ios::out | ios::binary);

    cout << "displaying all records" << endl;

    accounts.read(reinterpret_cast<char *>(&record),sizeof(record));

    while(!accounts.eof())
    {
        cout << "Name: ";
        cout << record.name <<endl;
        cout << "Address: " ;
        cout << record.address1 << endl;
        cout << "Address: ";
        cout << record.address2 << endl;
        cout << "Phone: ";
        cout << record.phone << endl;
        cout << "Balance: ";
        cout << record.balance << endl;
        cout << "Last Payment: ";
        cout << record.LastPaymentDate <<endl;

        accounts.read(reinterpret_cast<char *>(&record),sizeof(record));
    }
    accounts.close();
    return;
}

//****************************************************


//****************************************************


//****************************************************


//****************************************************



