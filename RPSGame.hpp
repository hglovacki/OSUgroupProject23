//Header File for the RPSGame class

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
            int menu();
            void deleteTools();
            
};

#endif
