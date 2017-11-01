//Scissor Class Header File
//This class must inherit from the Tool class
#ifndef SCISSOR_HPP
#define SCISSOR_HPP

#include "Tool.hpp"

class Scissor : public Tool
{
    public:
          Scissor();
          Scissor(int);
          int fight(Tool) override;
};

#endif
