/*****************************************************************************
Program:	space.h
Date: 		11/28/2017

Name:		John Wolfe
Email:		jw877415@ohio.edu

Description:	This is the space function, which only exists to say if a
		section of the board is white, black, or empty. 
*****************************************************************************/

#ifndef BACON
#define BACON

class Space{

public:
bool isWhite()const {return white;}
bool isBlack()const {return black;} 
bool isEmpty()const {return empty;}
void flip();
void White(){white = 1; empty = 0;}
void Black(){black = 1; empty = 0;}
void make_empty() {empty = 1;}

private:
bool white;
bool black;
bool empty;
};

#endif

