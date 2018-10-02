// Brock Ferrell
// CS2401
// November 23, 2015
// Project7

#ifndef OTHELLO_H
#define OTHELLO_H
#include "game.h"
#include "piece.h"
#include "colors.h"
#include <iostream>
using namespace std;

/**
* @file
* @brief The overall header file for the program, encompassing colors, piece and game.h
* private variables for pawn color (black, white), the number of skips and openSpots
*
* @author Brock Ferrell
*/

namespace main_savitch_14{


class Othello: public game {
public:

	Othello() {}

	void display_status()const;
	int evaluate()const;

	/**
	* @brief this boolean function checks for a game winning or losing condition
	* @param none
	* @return true or false
	*/
	bool is_game_over()const;
	bool is_legal(const string& move)const;
	void make_move(const string& move);
	void restart();
	void make_skips();
	void countingPieces();
	void whosTurn();
	game* clone()const{return new Othello(*this);}
	void compute_moves(std::queue<std::string>& moves)const;
	who winning()const;

protected:
	int black;
	int white;
	int skips;
	int openSpots;
	int b;
	int w;

private:
	piece gameBoard[8][8];
};
}

#endif
