//Paper Class header file
//This class must inherit from the Tool class
#ifndef PAPER_HPP
#define PAPER_HPP

#include "Tool.hpp"

class Paper : public Tool
{
          public:
                  Paper();
                  Paper(int);
                  virtual int fight(Tool);
};

#endif
