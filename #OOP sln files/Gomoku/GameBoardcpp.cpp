#include<iostream>
#include"GameBoard.h"
#include<iomanip>
using namespace std;


void GomokuBoard::switchPlayerTurn()
{
	(currentPlayer == FIRST_PLAYER) ? (currentPlayer = SECOND_PLAYER) : (currentPlayer = FIRST_PLAYER);

	/*if (currentPlayer == FIRST_PLAYER)
	{
		currentPlayer = SECOND_PLAYER;
	}
	else
	{
		currentPlayer = FIRST_PLAYER;
	}*/
}

GomokuBoard::GomokuBoard()
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			board[i][j] = '.';
			
		}
		
	}
	
}

void GomokuBoard::displayBoard()
{
	cout << "  ";
	for (int i = 1; i <= 19; i++)
	{
		cout << setw(2)<<i;
		cout << "  ";
	}
	cout << endl;

	int a = 1;
	for (int i = 0; i < ROWS; i++)
	{
		cout <<setw(2)<< a<<" ";
		a = a + 1;
		for (int j = 0; j < COLS; j++)
		{   

			cout<<board[i][j];
			cout << "   ";
		}
		cout << '\n';
	}

	
}

int GomokuBoard::getValidMOvesCount()

{

	return validMoveCount;

}

int GomokuBoard::markBoard(int r, int c)
{

	if (isValidPos(r, c))
	{
		if (!isAlreadyMarked(r, c))
		{
			board[r][c] = currentPlayer;
			validMoveCount = validMoveCount + 1;
			return 1;
		}
		else
		{
			return -1;
		}

	}

	else
	{
		return 0;
	}
	
	
	
}


bool GomokuBoard::isAlreadyMarked(int r, int c)
{
	if (board[r][c] == '.')
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool GomokuBoard::isValidPos(int r, int c)
{
	if ((r >= 1 && r <= 19) && (c >= 1 && c <= 19))
	{
		return true;
	}
	else
	{
		return false;
	}
}


PlayerTurn GomokuBoard::getCurrentPlayer()
{
	return currentPlayer;
}

GameStatus GomokuBoard::getGameStatus()
{
	return gameStatus;

}