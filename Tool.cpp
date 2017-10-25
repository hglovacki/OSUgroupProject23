//
#include "Tool.hpp"

/***********************************************
*              Tool::setStrength(int)
* This method will set the strength variable of the 
* tool class to the value passed into the parameter
**************************************************/
void Tool::SetStrength(int strong)
{
   strength = strong;
}

/***************************************************
*                 Tool::getStrength()
* This method will return the value of the strength 
* variable of this object
****************************************************/
int Tool::getStrength()
{
   return this->strength;
}

/********************************************************
                  Tool::setType(char)
* This method will take a char as a parameter and set it
* to the type variable of the object that calls it
**********************************************************/
void Tool::setType(char newType)
{
   type = newType;
}

/**********************************************************
                    Tool::getType()
* This method will return the char value that is associated
* with the type variable of the object that calls it
************************************************************/
char Tool::getType()
{
   return this->type;
}
