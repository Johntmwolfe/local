/*****************************************************************************
Program:        main.cc (depends on Othello.h)
Date:           11/28/2017

Name:           John Wolfe
Email:          jw877415@ohio.edu

Description:    Welcome to phase 2's main function! This function will 
		initialize a game of Othello for two human players to play 
		against each other. The game goes until completion, where it 
		will then declare a winner, and then quit.
*****************************************************************************/
#include "Othello.h"
#include <iostream>
using namespace main_savitch_14;

int main()
{
Othello test;
game::who winner;

winner = test.play(); //I forgot this function was a thing in phase 1. Whoops.
if (winner == game::HUMAN)
	std::cout << "Player Black wins!\n";
else
	std::cout << "Player White wins!\n";

std::cout << "Thank you for playing Othello. Program ending. Have a good day!\n";

return 0;
}
