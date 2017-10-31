OBJS = RPSGame.o Scissor.o Paper.o Rock.o Tool.o play_game.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

game : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o game

play_game.o : play_game.cpp RPSGame.hpp
    $(CC) $(CFALGS) play_game.cpp

RPSGame.o : RPSGame.hpp RPSGame.cpp Scissor.hpp Paper.hpp Rock.hpp Tool.hpp
	$(CC) $(CFLAGS) RPSGame.cpp

Scissor.o : Scissor.hpp Scissor.cpp Tool.hpp
	$(CC) $(CFLAGS) Scissor.cpp

Paper.o : Paper.hpp Paper.cpp Tool.hpp 
	$(CC) $(CFLAGS) Paper.cpp

Rock.o : Rock.hpp Rock.cpp Tool.hpp
	$(CC) $(CFLAGS) Rock.cpp

Tool.o : Tool.hpp Tool.cpp
	$(CC) $(CFLAGS) Tool.cpp

clean:
	\rm *.o *~ game
