/*****************************************************************************
Program:        Othello.h (depends on game.h and space.h to function)
Date:           11/28/2017

Name:           John Wolfe
Email:          jw877415@ohio.edu

Description:    This is the game of Othello, and the various functions meant
		to represent the game of Othello. Currently, this functions as 
		a fully functioning game of Othello between two human players.
		As a result, most of the computer functions have no implementation
		yet, but they will in phase 3.
*****************************************************************************/
#ifndef CHEESY
#define CHEESY	

#include "space.h"
#include "game.h"
namespace main_savitch_14
{
  class Othello : public game
  {
  public:
  Othello(){restart();}
  //Makes an Othello board, using the restart function

  void make_move(const std::string& move);
//Pre: Move is valid.
//Post:Makes the move, and flips any other pieces it needs to. 

  void restart();
//Makes an Othello board from the beginning, setting the pieces where they 
//need. If a game was already running, it erases the board and begins a new game

  void compute_moves(std::queue<std::string>& moves)const;
//Pre: Othello has been initialized
//Post:Changes the queue to hold all of the legal moves possible for this player

  void display_status()const;
//Pre: Othello has been initialized
//Post:Shows the board to the screen, including whatever pieces are there.

  int evaluate()const;
 

  bool is_game_over()const{return passes == 2;}
//Pre: Othello has been initialized
//Post:Returns 1 if the game is over, 0 otherwise


  bool is_legal(const std::string& move)const;
//Pre: board has been initialized
//Post:Checks if the move they user tried to input breaks any rules. If not, 
//     it returns true. Else, it returns false.

  game* clone()const;

  game::who winning()const;
//Pre: A who variable from the game class has been initialized
//Post:Returns to that who variable who is currently winning the game


  std::string get_user_move()const;
//Pre: Othello has been initialized
//Post:Gets the user's move. This overloaded version also checks to see if
//     there are any moves to make for this player. If not, it passes for the user.


  private:
  Space board[8][8];
  int passes;
  };

}

#endif
