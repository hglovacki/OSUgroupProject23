//Scissor Class Header File
//This class must inherit from the Tool class
#ifndef SCISSOR_HPP
#define SCISSOR_HPP

class Scissor : public Tool
{
    public:
          Scissor();
          Scissor(int);
          int fight(Tool);
};

#endif
