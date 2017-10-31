//Implementation file for the RPS Game class
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RPSGame.hpp"

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
    menuQuestion("Please enter the number of your choice from the list below.");
    menuQuestion("1. Play RPS");
    menuQuestion("2. Quit Game");
    
    //take valid menuChoice from user
    intake();
  
    while (menuChoice < 2){
      
        //Setup the two tools for the human and computer to battle with.
        //Start by asking the user which tool they would like to use
        menuQuestion("Please pick a tool to battle with from the list below by entering the corresponding number.");
        menuQuestion("1. Rock");
        menuQuestion("2. Paper");
        menuQuestion("3. Scissor");
        
        //Input Validation loop
        intake3();
        
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
        
        menuQuestion("Would you like to Play Again?");
        menuQuestion("1. Play RPS");
        menuQuestion("2. Quit Game");
        
        intake();
    }//return to main
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


/***************************************************************************************************
 ** utility functions
 ***************************************************************************************************/
//intake binary input that only accepts 1 or 2
void RPSGame::intake(){
    cout << " ➡ ";
    cin >> menuChoice;
    while (!(cin) or ((menuChoice < 1) or (menuChoice > 2)))
    {
        clearBuffer();
        cout << "Invalid: Please enter 1 or 2 ➡ ";
        cin >> menuChoice;
    }
    clearBuffer();
}
//intake binary input that only accepts 1 or 2
void RPSGame::intake3(){
    do
    {
        clearBuffer();
        cout << "Please enter 1 or 2 or 3 ➡";
        cin >> playerChoice;
    }while ((!(cin)) or ((playerChoice < 1) or (playerChoice > 3)));
    clearBuffer();
}

//clear keyboard buffer
void RPSGame::clearBuffer(){
    cout << "\nINFO: clearing buffer ... \n" << endl;
    cin.clear();
    cin.ignore(15, '\n');
}
//return true or false if positive integer
bool RPSGame::validatePosInt(int number){
    if ( number < 1) {
        cout <<"\nERROR: Not a positive integer ... \n";
        return false;
    }
    return true;
}
//Menu Questionaire
void RPSGame::menuQuestion(std::string text){
    cout << text << endl;
}
//randomizer

  
 
        


