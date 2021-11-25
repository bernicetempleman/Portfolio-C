/*
 * Programmer : Bernice Templeman
 * COP1334
 * Homework #
 * 
 * Description: 
 * Rock, Paper, Scissors
 * Player vs Computer
 */


#include <iostream>

using namespace std;

// Constants
static int ROCK = 1;
static int PAPER = 2;
static int SCISSORS = 3;

static int COMPUTER = 1;
static int PLAYER = 2;
static int TIE = 3;

static int GAMENUM = 10;
static int MINCHOICE = 1;
static int MAXCHOICE = 3;

// function prototypes
void void getComputerChoice(int&) //pass by reference
void getUserInput( int&)          // pass by reference 
void displayMenu();               //display Menu
int compareChoices(int, int);      //pass by value
void updateScore(int, int&, int&); //pass by value & reference
void displayResults( int, int, int);
void displayScores( int, int);
void displayWinnerOfGame(int);

int main()
{
    int userChoice;
    int computerChoice;      // 
    int winnerOfRound - 0;
    int winnerOfGame = 0;
    int computerScore = 0;
    int playerScore = 0;

    while ( winnerOfGame = 0)
    {

       getComputerChoice(computerChoice);
       displayMenu();            // call the function to display menu
       getUserInput(userChoice); //call the function to get userInput (pass by reference)
       
       if ((userChoice < MINCHOICE) || (userChoice >MAXCHOICE))
       {
            cout << "please enter 1, 2, or 3 only!" << endl;
       }
       
       else
       {
          winnerOfRound = compareChoices(userChoice, computerChoice);
          updateScore(winnerOfRound);
          displayResults(computerChoice,userChoice, winnerOfRound); 
          displayScores(userScore, ComputerScore);
       }//end else valid choice

    }//end while no winnerOfGame

    displayWinnerOfGame(winnerOfGame);

    

    return 0;
}

// pass by Reference - you really are not passing anything, except address
// there is no copy
void getUserInput(int& n2)
{
    cout << "Your Choice: ";
    cin >> n2;
    cin.ignore();
    cin.get();
    
}

// pass by Reference - you really are not passing anything, except address
// there is no copy
void getComputerChoice(int& n1)
{
  srand(time(NULL));
  n1 =rand() % MAXCHOICE + MINCHOICE;
    
}


int compareChoices(int num1, int num2)
{
    int winnerOfRound;
    if ( num1 > num2)
        winnerOfRound = COMPUTER;
    else if (num1 < num2)
        winnerOfRound = PLAYER;
    else if (num1 == num2)
        winnerOfRound = TIE;
    return winnerOfRound;
}

void updateScore(int winnerOfRound, int& computerScore, int& playerScore)
{
   if (winnerOfRound == COMPUTER)
   {
      computerScore++;
      if (computerScore == GAMENUM)
         winnerOfGame = COMPUTER;
   }
   else if (winnerOfRound == PLAYER)
   {
      playerScore++;
      if(playerScore == GAMENUM)
         winnerOfGame = PLAYER;
   }
}

void displayMenu()
{
    cout << "Game Menu:" << endl;
    cout << "_________" << endl;
    cout << "1. Rock " << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter Your Choice: ";
}

void displayResults(int computerChoice,int userChoice, int winnerOfRound)
{
    cout << "You Selected: "<<  userChoice << endl;
    cout << "The Computer Selected: " << computerChoice;
    if (winnerOfRound == COMPUTER )
    {
        cout << "The Computer Wins!" << endl;
            switch (computerChoice)
            {
            case ROCK:
              cout << "Rock Smashes Scissors"<< endl;
              break;
            case PAPER:
              cout << "Scissors Cut Paper" << endl;
              break;
            case SCISSORS:
             cout << "Paper Wraps Rock" << endl;
             break;
             }
    }
    else if (winnerOfRound == PLAYER)
    {
        cout << "You Win!" << endl;

        switch (userChoice)
        {
           case ROCK:
               cout << "Rock Smashes Scissors"<< endl;
               break;
           case PAPER:
              cout << "Scissors Cut Paper" << endl;
              break;
       
           case SCISSORS:
             cout << "Paper Wraps Rock" << endl;
             break;
       }
     }
    else if (winnerOfRound == TIE)
    {
        cout << "Tie" << endl;
     }

    
}

void displayScores(int userScore, int computerScore)
{
   cout << "USER : COMPUTER" << endl;
   cout << "_______________" << endl;
   cout << "  "<< userScore << " :   " computerScore" <<endl;
}

void displayWinnerOfGame(int winnerOfGame)
{
    cout << "Winner of Game: " << winnerOfGame << endl;
}
