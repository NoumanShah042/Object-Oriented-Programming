#include<iostream>
#include "GameBoard.h"
#include "TicTacToe.h"
using namespace std;

//constructor   
GameBoard::GameBoard()
{
	int k = 49;
	for (int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			data[i][j] = k;
			k = k + 1;
		}
	}

	
} 

void GameBoard::displayBoard()
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << data[i][j] << "  ";

		}
		cout << endl;
	}

}

bool GameBoard::markBoard(char pos, char playerSymbol)
{
	if (isValidPosition(pos) && !isalreadyMarked(pos))
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (data[i][j] == pos)
				{
					data[i][j] = playerSymbol;
					validMoveCount = validMoveCount + 1;
					

					return 1;
				}
			}
		}

	 }
	else
	{
		cout << "enter valid position" << endl;
		return false;
		
	}
}

bool GameBoard::isValidPosition(char pos)
{
	if (pos>='1' && pos<='9' )
	{
		return true;
	}
	else
	{
		return false;
	}


}

bool  GameBoard::isalreadyMarked(char pos)
{
	char k = '1';
	char d;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0 ; j < 3 && k <= pos ; j++)
		{
			d = data[i][j];
			k = k + 1;

		}
	}
	//cout << d << endl;
	if (d == pos)
	{
		return false;
	}
	else
		return true;
}

int  GameBoard::getValidMovesCount()
{
	return validMoveCount;
}
GameStatus  GameBoard::getGameStatus()
{
	return gameStatus;

}
void GameBoard::changeGameStatus(char symbol)
{
	if ( (isHorizontal(symbol) || isVertical(symbol) ) || isDigonal(symbol)   )
	{
	
		gameStatus = WIN;
	}
	else if(validMoveCount != 9)
	{
		gameStatus =IN_PROGRESS;
	}
	else
	{
		gameStatus = DRAW;
	}
	
}
bool GameBoard::isHorizontal(char symbol)
{
	if (data[0][0] == symbol && data[0][1] == symbol && data[0][2] == symbol ||
		data[1][0] == symbol && data[1][1] == symbol && data[1][2] == symbol ||
		data[2][0] == symbol && data[2][1] == symbol && data[2][2] == symbol)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool GameBoard::isVertical(char symbol)
{
	if (data[0][0] == symbol && data[1][0] == symbol && data[2][0] == symbol ||
		data[0][1] == symbol && data[1][1] == symbol && data[2][1] == symbol ||
		data[0][2] == symbol && data[1][2] == symbol && data[2][2] == symbol)
	{
		return 1;

	}

	else
	{
		return 0;
	}
}
bool GameBoard::isDigonal(char symbol)
{
	if (data[0][0] == symbol && data[1][1] == symbol && data[2][2] == symbol ||
		data[2][0] == symbol && data[1][1] == symbol && data[0][2] == symbol)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}




