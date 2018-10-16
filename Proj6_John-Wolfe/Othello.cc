/*************************************************************
File implementation for Othello.cc
*************************************************************/

#include "colors.h"
#include "Othello.h"
#include <iostream>
#include <cctype>
namespace main_savitch_14
{






void Othello::make_move(const std::string& move)
{
int column, row, i, j, flip_num;
column = int(toupper(move[0])-'A');
row = int(move[1]-'1');
if (move == "CHUNGUS")
	{
	passes++;
	}

else if (next_mover() == HUMAN)
	{
	board[row][column].Black();

	flip_num = 0;
	for (i = column + 1; i < 8; i++)
		{
		if (board[row][i].isEmpty())
			break;
	
		if (board[row][i].isBlack())
			{
			for (int k = 0; k < flip_num; k++)
				board[row][column+1+k].flip();
			break;
			}
		else
			flip_num++;
		}

	flip_num = 0; 
	for (i = column - 1; i > -1; i--)
		{
		if (board[row][i].isEmpty())
			break;
		if (board[row][i].isBlack())
			{
			for (int k = 0; k < flip_num; k++)
				board[row][column-1-k].flip();
			break;
			}
		else
			flip_num++;
		}

	flip_num = 0;
	for (i = row + 1; i < 8; i++)
		{
		if (board[i][column].isEmpty())
			break;
		if (board[i][column].isBlack())
			{
			for (int k = 0; k < flip_num; k++)
				board[row+1+k][column].flip();
			break;
			}
		else
			flip_num++;
		}

	flip_num = 0;
	for (i = row - 1; i > -1; i--)
		{
		if (board[i][column].isEmpty())
			break;
		if (board[i][column].isBlack())
			{
			for (int k = 0; k < flip_num; k++)
				board[row-1-k][column].flip();
			break;
			}
		else
			flip_num++;
		}

	flip_num = 0;
	j = column + 1;
	for (i = row + 1; i < 8 && j < 8; i++)
		{
		if (board[i][j].isEmpty())
			break;
		if (board[i][j].isBlack())
			{
			for (int k = 0; k < flip_num; k++)
				board[row+1+k][column+1+k].flip();
			break;
			}
		else
			flip_num++;
		j++;
		}

	flip_num = 0;
	j = column + 1;
	for (i = row - 1; i > -1 && j < 8; i--)
		{
		if (board[i][j].isEmpty())
			break;
		if (board[i][j].isBlack())
			{
			for (int k = 0; k < flip_num; k++)
				board[row-1-k][column+1+k].flip();
			break;
			}
		else
			flip_num++;
		j++;
		}

	flip_num = 0;
	j = column - 1;
	for (i = row + 1; i < 8 && j > -1; i++)
		{
		if (board[i][j].isEmpty())
			break;
		if (board[i][j].isBlack())
			{
			for (int k = 0; k < flip_num; k++)
				board[row+1+k][column-1-k].flip();
			break;
			}
		else
			flip_num++;
		j--;
		}

	flip_num = 0;
	j = column - 1;
	for (i = row - 1; i > -1 && j > -1; i--)
		{
		if (board[i][j].isEmpty())
			break;
		if (board[i][j].isBlack())
			{
			for (int k = 0; k < flip_num; k++)
				board[row-1-k][column-1-k].flip();
			break;
			}
		else
			flip_num++;
		j--;
		}
	passes = 0;
	}

else if (next_mover() == COMPUTER)
	{
	board[row][column].White();

        flip_num = 0;
        for (i = column + 1; i < 8; i++)
                {
                if (board[row][i].isEmpty())
                        break;
                if (board[row][i].isWhite())
                        {
                        for (int k = 0; k < flip_num; k++)
                                board[row][column+1+k].flip();
                        break;
                        }
                else
                        flip_num++;
                }

	flip_num = 0; 
        for (i = column - 1; i > -1; i--)
                {
                if (board[row][i].isEmpty())
                        break;
                if (board[row][i].isWhite())
                        {
                        for (int k = 0; k < flip_num; k++)
                                board[row][column-1-k].flip();
                        break;
                        }
                else
                        flip_num++;
                }


 	flip_num = 0;
        for (i = row + 1; i < 8; i++)
                {
                if (board[i][column].isEmpty())
                        break;
                if (board[i][column].isWhite())
                        {
                        for (int k = 0; k < flip_num; k++)
                                board[row+1+k][column].flip();
                        break;
                        }
                else
                        flip_num++;
                }

        flip_num = 0;
        for (i = row - 1; i > -1; i--)
                {
                if (board[i][column].isEmpty())
                        break;
                if (board[i][column].isWhite())
                        {
                        for (int k = 0; k < flip_num; k++)
                                board[row-1-k][column].flip();
                        break;
                        }
                else
                        flip_num++;
                }

	flip_num = 0;
        j = column + 1;
        for (i = row + 1; i < 8 && j < 8; i++)
                {
                if (board[i][j].isEmpty())
                        break;
                if (board[i][j].isWhite())
                        {
                        for (int k = 0; k < flip_num; k++)
                                board[row+1+k][column+1+k].flip();
                        break;
                        }
                else
                        flip_num++;
                j++;
                }

	flip_num = 0;
        j = column + 1;
        for (i = row - 1; i > -1 && j < 8; i--)
                {
                if (board[i][j].isEmpty())
                        break;
                if (board[i][j].isWhite())
                        {
                        for (int k = 0; k < flip_num; k++)
                                board[row-1-k][column+1+k].flip();
                        break;
                        }
                else
                        flip_num++;
                j++;
                }
	
	flip_num = 0;
        j = column - 1;
        for (i = row + 1; i < 8 && j > -1; i++)
                {
                if (board[i][j].isEmpty())
                        break;
                if (board[i][j].isWhite())
                        {
                        for (int k = 0; k < flip_num; k++)
                                board[row+1+k][column-1-k].flip();
                        break;
                        }
                else
                        flip_num++;
                j--;
                }

        flip_num = 0;
        j = column - 1;
        for (i = row - 1; i > -1 && j > -1; i--)
                {
                if (board[i][j].isEmpty())
                        break;
                if (board[i][j].isWhite())
                        {
                        for (int k = 0; k < flip_num; k++)
                                board[row-1-k][column-1-k].flip();
                        break;
                        }
                else
                        flip_num++;
                j--;
		}
	passes = 0;
	}

game::make_move(move);
}






void Othello::restart()
{
for (int i = 0; i < 8; i++)
        {
        for (int j = 0; j < 8; j++)
                {
		board[i][j].Black();
		board[i][j].White();
		board[i][j].flip();
		board[i][j].make_empty();
                }
        }
board[3][3].White();
board[3][4].Black();
board[4][3].Black();
board[4][4].White();
}






game* Othello::clone()const
{
return new Othello(*this);
}






void Othello::compute_moves(std::queue<std::string>& moves)const
{
std::string str1, str2;
for (char i = 'A'; i < 'I'; i++)
        {
        for (char j = '1'; j < '9'; j++)
                {
                str1 = i;
		str2 = j;
		str1 += str2;
                if (is_legal(str1))
			moves.push(str1);
		}
	}
}






void Othello::display_status()const
{
int i, j;
std::cout << B_CYAN << "\n  |   A   |   B   |   C   |   D   |   E   |   F   |   G   |   H   |\n";
for (i = 0; i < 8; i++)
	{
	std::cout << "--------------------------------------------------------------------\n";
	std::cout << " " << i+1 << " |";
	for (j = 0; j < 8; j++)
		{
		if (board[i][j].isEmpty())
			std::cout << "       |";
		else if (board[i][j].isWhite())
			std::cout << B_WHITE << "       " << B_CYAN << "|";
		else 
			std::cout << B_BLACK << "       " << B_CYAN << "|";
		}
	std::cout << "\n";
	}
std::cout << RESET << "\n";

}






int Othello::evaluate()const
{
return 0;
}








bool Othello::is_legal(const std::string& move)const
{
int column, row, i, j;
column = int(toupper(move[0])-'A');
row = int(move[1]-'1');


if (move == "CHUNGUS")
	return true;


if (board[row][column].isWhite() || board[row][column].isBlack())
                return false;

if (next_mover() == HUMAN)
	{
	for (i = column + 1; i < 8; i++)
		{
		if (i > column + 1 && board[row][i].isBlack())
                	return true;
		if (board[row][i].isBlack() || board[row][i].isEmpty())
			break;
		}
	for (i = column - 1; i > -1; i--)
		{
		if (i < column - 1 && board[row][i].isBlack())
                	return true;
		if (board[row][i].isBlack() || board[row][i].isEmpty())
			break;
		}
	for (i = row +1; i < 8; i++)
		{
		if (i > row + 1 && board[i][column].isBlack())
                	return true;
		if (board[i][column].isBlack() || board[i][column].isEmpty())
			break;
		}
	for (i = row - 1; i > -1; i--)
		{
		if (i < row - 1 && board[i][column].isBlack())
                	return true;
		if (board[i][column].isBlack() || board[i][column].isEmpty())
			break;
		}
	i = row + 1;
	for (j = column + 1; j < 8 && i < 8; j++)
		{
		if (i > row + 1 && j > column + 1 && board[i][j].isBlack())
                	return true;
		if (board[i][j].isEmpty() || board[i][j].isBlack())
			break;
		i++;
		}
	i = row - 1;
	for (j = column + 1; j < 8 && i > -1; j++)
		{
		if (j > column + 1 && i < row - 1 && board[i][j].isBlack())
                	return true;
		if (board[i][j].isEmpty() || board[i][j].isBlack())
			break;
		i--;
		}
	i = row + 1;
	for (j = column - 1; j > -1 && i < 8; j--)
		{
		if (j < column - 1 && i > row + 1 && board[i][j].isBlack())
                	return true;
		if (board[i][j].isEmpty() || board[i][j].isBlack())
			break;
		i++;
		}
	i = row - 1;
	for (j = column - 1; j > -1 && i > -1; j--)
		{
		if (j < column -1 && i < row - 1 && board[i][j].isBlack())
                	return true;
		if (board[i][j].isEmpty() || board[i][j].isBlack())
			break;
		i--;
		}
	}

if (next_mover() == COMPUTER)
	{
	for (i = column + 1; i < 8; i++)
                {
                if (i > column + 1 && board[row][i].isWhite())
                        return true;
                if (board[row][i].isWhite() || board[row][i].isEmpty())
                        break;
                }
        for (i = column - 1; i > -1; i--)
                {
                if (i < column - 1 && board[row][i].isWhite())
                        return true;
		
                if (board[row][i].isWhite() || board[row][i].isEmpty())
                        break;
                }
        for (i = row +1; i < 8; i++)
                {
                if (i > row + 1 && board[i][column].isWhite())
                        return true;
                if (board[i][column].isWhite() || board[i][column].isEmpty())
                        break;
                }
        for (i = row - 1; i > -1; i--)
                {
                if (i < row - 1 && board[i][column].isWhite())
                        return true;
                if (board[i][column].isWhite() || board[i][column].isEmpty())
                        break;
                }
	i = row + 1;
        for (j = column + 1; j < 8 && i < 8; j++)
                {
                if (i > row + 1 && j > column + 1 && board[i][j].isWhite())
                        return true;
                if (board[i][j].isEmpty() || board[i][j].isWhite())
                        break;
                i++;
                }
        i = row - 1;
        for (j = column + 1; j < 8 && i > -1; j++)
                {
                if (j > column + 1 && i < row - 1 && board[i][j].isWhite())
                        return true;
                if (board[i][j].isEmpty() || board[i][j].isWhite())
                        break;
                i--;
                }
        i = row + 1;
        for (j = column - 1; j > -1 && i < 8; j--)
                {
                if (j < column - 1 && i > row + 1 && board[i][j].isWhite())
                        return true;
                if (board[i][j].isEmpty() || board[i][j].isWhite())
                        break;
                i++;
                }
	i = row - 1;
        for (j = column - 1; j > -1 && i > -1; j--)
                {
                if (j < column -1 && i < row - 1 && board[i][j].isWhite())
                        return true;
                if (board[i][j].isEmpty() || board[i][j].isWhite())
                        break;
                i--;
                }

	}
return false;
}






game::who Othello::winning()const
{
int b = 0, w = 0;
for (int i = 0; i < 8; i++)
        {
        for (int j = 0; j < 8; j++)
                {
                if (board[i][j].isBlack())
                        b++;
                if (board[i][j].isWhite())
                        w++;
                }
        }
if (b > w)
	return HUMAN;
else
	return COMPUTER;
}






std::string Othello::get_user_move()const
{
std::queue<std::string> moves;
compute_moves(moves);
string answer;
if (next_mover() == game::HUMAN)
	std::cout << "Player Black's turn.\n";
else
	std::cout << "Player White's turn.\n";
if (moves.empty())
	{
	std::cout << "There's no legal move for you to make. Sorry mate, passing your turn.\n";
	return "CHUNGUS"; //some nonsensical word a friend of mine says
	}
else
	{
	display_message("Your move, please: ");
	getline(cin, answer);
	return answer;
	}
}





}
