#include<iostream>
#include"GameBoard.h"
#include"Gomoku.h"
using namespace std;


void GomokuGame::playGame()
{
	GomokuBoard board;
	

	while (board.getGameStatus() == IN_PROGRESS)
	{
		board.displayBoard();

		
		int isMoveSuccessfully;
		do
		{
			int r, c;
			cout << '\n' << "Player " << (char)board.getCurrentPlayer() << " enter Position (row column)";
			cin >> r >> c;
			isMoveSuccessfully = board.markBoard(r, c);
		} while (!isMoveSuccessfully);

		if()
	}
}
