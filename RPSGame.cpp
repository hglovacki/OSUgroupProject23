//Implementation file for the RPS Game class
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::rand;

/****************************************************************
*                     RPSGame::menu()
* This function will ask the user if they would like to play a round
* of RPS or quit the program. It will take the user input and either quit,
* or move on to the next step. Next it will ask the user which tool they
* would like to use, then will randomly pick which tool the computer will
* use.
******************************************************************/
int RPSGame::menu()
{
  //Ask the user what they would like to do
  cout << "Please enter the number of your choice from the list below." << endl;
  cout << "1. Play RPS" << endl;
  cout << "2. Quit Game" << endl;
  //Input Validation loop
  for(;;)
  {
    if(cin >> menuChoice)
    {
      if(menuChoice == 1 || menuChoice == 2)
      {
        break;
      }
      else
      {
        cout << "You did not enter a valid menu option." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
      }
    }
    else
    {
      cout << "You did not enter a valid menu option." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
  }
  
  if(menuChoice == 2)
  {
      return 0;
      //Check for a 0 value in the main function, by calling this function
      //If so, quit program
  }
  else if(menuChoice == 1)
  {
      return 1;
      //Check for a 1 value in the main function, by calling this function.
      //if so, the main should call the next function to run a round of RPS
  }
  
 
        


