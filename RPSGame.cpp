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
  cout << "2. Quit Game" << endl << endl;
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
      //Setup the two tools for the human and computer to battle with.
      //Start by asking the user which tool they would like to use
      cout << "Please pick a tool to battle with from the list below by entering the corresponding number." << endl;
      cout << "1. Rock" << endl;
      cout << "2. Paper" << endl;
      cout << "3. Scissor" << endl << endl;
      //Input Validation loop
      for(;;)
      {
        if(cin >> playerChoice)
        {
          if(playerChoice >= 1 && playerChoice <= 3)
          {
            break;
          }
          else
          {
            cout << "You did not enter a valid tool choice. Please try again." << endl << endl;
            cin.clear();
            cin.ignore(100000, '\n');
          }
        }
        else
        {
          cout << "You did not enter a valid tool choice. Please try again." << endl << endl;
          cin.clear();
          cin.ignore(100000, '\n');
        }
      }
    
      //Depending on what the user entered, set up the tool
      if(playerChoice == 1)
      {
        //create a rock object for the user
        human = new Rock;
      }
      else if(playerChoice == 2)
      {
        //Create a paper object for the user
        human = new Paper;
      }
      else if(playerChoice == 3)
      {
        //Create a scissor object for the user
        human = new Scissor;
      }
    
      //Now randomly pick a tool for the computer to use against the user
      computerChoice = rand()%3 + 1;
      if(computerChoice == 1)
      {
        //create a rock object for the computer
        computer = new Rock;
      }
      else if(computerChoice == 2)
      {
        //create a paper object for the computer
        computer = new Paper;
      }
      else if(computerChoice == 1)
      {
        //create a scissor object for the computer
        computer = new Scissor;
      }
    
      //Display what tool the computer is using to the user
      cout << "The computer uses " << computer->getType(); << endl << endl;
      
      //Return 1 so that the main program trying to run the game can know what the user chose to do
      return 1;
  }
}

/**************************************************************************
*                   RPSGame::deleteTools()
* This function should be called once the user has decided to quit playing the
* game. It will delete the dynamically alloacted memory used to create the tools
* for the user and the computer.
****************************************************************************/
void RPSGame::deleteTools()
{
  delete human;
  delete computer;
}

/****************************************************************************
*                     RPSGame::fightTools()
* This function will be responsible for making the two tools of the human and computer
* fight. It will start by calling the fight function of each tool passing the
* other tool to their call. We can compare the values returned by these functions
* to figure out the result of the fight. 
*****************************************************************************/
void RPSGame::fightTools()
{
  //Call the two fight functions to get the strengths of the tools.
  humanStrength = human->fight(computer);
  computerStrength = computer->fight(human);
  
  //If human is stronger than computer, human wins, increase the human score
  if(humanStrength > computerStrength)
  {
    cout << "You win!!!" << endl << endl;
    humanWins++;
    
  }
  //If human is weaker than computer, computer wins, increase the computer score
  else if(humanStrength < computerStrength)
  {
    cout << "Computer Wins!" << endl << endl;
    computerWins++;
  }
  //If human and computer have the same strength, there is a tie, and the tie count should increase
  else if(humanStrength == computerStrength)
  {
    cout << "There was a tie!" << endl << endl;
    ties++;
  }
}
    
    
  
 
        


