//Rock Class Implementation File
//This class must inherit from the Tool class

#include "Rock.hpp"
#include "Too.hpp"

/********************************************************
                  Default Constructor
* This constructor will set the strength of this object to 1
* and the type to 'r'
**********************************************************/
Rock::Rock()
{
  strength = 1;
  type = 'r';
}

/**********************************************************
                   Overloaded Constructor
* This constructor will take an int parameter and use it to 
* set the strength of this object. It will also set the type 
* to 'r'
************************************************************/
Rock::Rock(int newStrength)
{
  strength = newStrength;
  type = 'r';
}

/************************************************************
                    Rock::fight(Tool)
* This function will temporarily double the strength of this object if the
* type of the Tool object is 's' and will temporarily halve the strength of
* this object if the type of the Tool object is 'p'
*************************************************************/
int Rock::fight(Tool *opponent)
{
  //Pass the other Tool to this function
  //Double the strength of this tool object
  if(opponent->getType() == 's')
  {
    return strength*2;
  }
  else if(opponent->getType() == 'p')
  {
    return strength*0.5;
  }
}
}
