//Header File for the RPSGame class

#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include "Tool.hpp"
#include "Rock.hpp"
#include "Scissor.hpp"
#include "Paper.hpp"

class RPSGame
{
protected:
    Tool *human;
    Tool *computer;
    int humanWins = 0;
    int computerWins = 0;
    int ties = 0;
    unsigned seed;
    int menuChoice;
    int playerChoice;
    int computerChoice;
    int humanStrength;
    int computerStrength;

public:
    //constructor
    RPSGame();
    
    //destructor
    ~RPSGame();
    
    //Game methods
    int menu();
    void deleteTools();
    void fightTools();

    //utility functions
    void intake();
    void intake3();
    void clearBuffer();
    bool validatePosInt(int);
    void menuQuestion(std::string);
    void randomizer();
};

#endif
