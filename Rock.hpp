//Rock Class Header File
//This class must inherit from the Tool Class

#ifndef ROCK_HPP
#define ROCK_HPP

#include "Tool.hpp"

class Rock : public Tool
{
      public:
              Rock();
              Rock(int);
              int figth(Tool);
};

#endif
