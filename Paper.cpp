//Paper Class implementation file
//This class must inherit from the tool class

#include "Paper.hpp"
#include "Tool.hpp

/***********************************************************
*                     Default Constructor
* This constructor will set the strength of the Paper object
* to a value of 1 and the type to 'p'
************************************************************/
Paper::Paper()
{
  this->strength = 1;
  this->type = 'p';
}

/***************************************************************
*                     Overloaded Constructor
* This constructor will take an int parameter and set the strength
* of this Paper object equal to that value. It will also set the type
* to 'p'.
*****************************************************************/
Paper::Paper(int newStrength)
{
  this->strength = newStrength;
  this->type = 'p';
}

/**************************************************************
                        Paper::fight()
* This function will manipulate the strength value of the Paper
* object depending on the type passed to the function in the parameter.
* If the parameter is equal to r then strength will temporarily double.
*If the parameter is equal to s then strength will temporarily halve.
****************************************************************/
int Paper::fight(Tool *opponent)
{
  //Pass the other Tool object to this function from the Game.
  //Double Strength Temporarily if opponent.getType() == 'r'
  if(opponent->getType() == 'r')
  {
    return strength*2;
  }
  //Halve Strength Temporarily if opponent.getType() == 's'
  else if(opponent->getType() == 's')
  {
    return strength*0.5;
  }
}
  
