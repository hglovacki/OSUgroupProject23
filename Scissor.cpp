//Scissor Class Implementation File
//This class must inherit from the Tool class

#include "Scissor.hpp"
#include "Tool.hpp"

/*******************************************************
                Default Constructor
* This constructor will set the strength of this object to 1
* and the type to 's'
********************************************************/
Scissor::Scissor()
{
  strength = 1;
  type = 's';
}

/***********************************************************
                Overlaoded Constructor
* This constructor will set the strength of this object to
* the value passed as a parameter and set the type to 's'
*************************************************************/
Scissor::Scissor(int newStrength)
{
  strength = newStrength;
  type = 's';
}

/*************************************************************
                    Scissor::fight(Tool)
* This method will double the strength of this object if the type of
* the Tool object passed to the parameter is 'p'. The strength
* will halve if the type of the Tool object passed to the parameter 
* is 'r'
***************************************************************/
int Scissor::fight(Tool *opponent)
{
    //Pass the other Tool object to this function from the Game
    //Double the strength if the opponents type is 'p'
    if(opponent->getType() == 'p')
    {
      return strength*2;
    }
    else if(opponent->getType() == 'r')
    {
      return strength*0.5;
    }
}

