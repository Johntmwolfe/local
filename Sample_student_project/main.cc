// Brock Ferrell
// CS2401
// November 23, 2015
// Project7

/**
 * @file main.cc
 * @brief Entry point of the program. Runs the Othello instance.
 * @author Brock Ferrell
 */

#include "game.h"
#include "othello.h"
using namespace main_savitch_14;

/**
 * @brief Entry point for the program. Parameters from the environment are
 * ignored.
 * @return Returns EXIT_SUCCESS (default specified by libc, as main() does
 * not specify a return value).
 */
int main()
{
	Othello theGame;
	theGame.restart();
	theGame.play();
}
