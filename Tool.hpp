//Include guard
#ifndef TOOL_HPP
#define TOOL_HPP

class Tool
{

protected:
    int strength;
    char type;

public:
    //force generation of default constructor
    Tool() = default;
    
    //virtual destructor
    virtual ~Tool() = default;
    
    /* Since a virtual destructor is defined, compiler assumes that we are going to define all
    our constructors ourselves which may affect our derived classes if we were to use default
    contructor or assignment operations.*/
    
    //force compiler to generate default copy constructor and assignment operator
    Tool(const Tool &) = default;
    Tool &operator=(const  Tool &) = default;
    
    //force compiler to generate default move constructor and assignment operator
    Tool(Tool &&) = default;
    Tool &operator=(Tool &&) = default;
    
    //methods
    virtual int fight(Tool)=0;
    void SetStrength(int);
    int  getStrength();
    void setType(char);
    char getType();
};

#endif
