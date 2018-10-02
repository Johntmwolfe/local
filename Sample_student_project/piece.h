// Brock Ferrell
// CS2401
// November 23, 2015
// Project7

/** @file piece.h
* @brief A class that represents a piece on a board
* @author John Wolfe
*/
#ifndef PIECE_H
#define PIECE_H
enum color {black, white, blank};

class piece {
public:
	piece() {theColor = blank;}

/** 
* @brief Switches the colors of the piece. Does nothing if there's no piece
*/
	void flip()
	{
		if (theColor == white) {
			theColor = black;
		}
		else if (theColor == black) {
			theColor = white;
		}
	}
/**
* @brief Checks if the piece is currently blank
* @return Returns a bool. 1 if blank, 0 if a piece is there.
*/
	bool is_blank()const {return theColor == blank;}
	bool is_black()const {return theColor == black;}
	bool is_white()const {return theColor == white;}
	void set_white() {theColor = white;}
	void set_black() {theColor = black;}

private:
	color theColor;

};

#endif

