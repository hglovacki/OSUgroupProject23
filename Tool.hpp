//Include guard
#ifndef TOOL_HPP
#define TOOL_HPP

class Tool
{
    protected:
            int strength;
            char type;
     public:
            virtual int fight(Tool) = 0;
            void SetStrength(int);
            int  getStrength();
            
            void setType(char);
            char getType();
};

#endif
