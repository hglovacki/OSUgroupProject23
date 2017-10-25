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
                  int fight(Tool);
};

#endif
