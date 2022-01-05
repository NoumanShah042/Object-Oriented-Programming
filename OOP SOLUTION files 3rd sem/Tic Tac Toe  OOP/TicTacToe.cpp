#include<iostream>
#include "GameBoard.h"
#include "TicTacToe.h"
using namespace std;


void TicTacToe::playGame()
{
	GameBoard board;
	char player1Symbol = 'X';
	char player2Symbol = 'Y';

	char cellNo;
	PlayerTurn currentPlayer = FIRST_PLAYER;
	char currentPlayerSymbol = player1Symbol;

	while ( board.getGameStatus() == IN_PROGRESS)
	{
		
		bool validMove = false;
		
		do
		{
			
			board.displayBoard();
			cout << endl;
			cout << "player " << currentPlayer << " turn : Enetr Position :";
			cin >> cellNo;
			validMove = board.markBoard(cellNo, currentPlayerSymbol);
			board.changeGameStatus(currentPlayerSymbol);
			//cout <<"game status:"<< board.getGameStatus();
			//cout << endl;
		} while (!validMove);

		if (board.getGameStatus() == WIN)
		{
			cout << endl;
			board.displayBoard();
			cout << endl;
			cout <<"Player " <<currentPlayer << " wins";
			return;
		}
		else if ( board.getGameStatus() == DRAW )
		{
			board.displayBoard();
			cout << " Game draw";
			return;
		}
		else
		{
			(currentPlayer == FIRST_PLAYER) ? currentPlayer = SECOND_PLAYER : currentPlayer = FIRST_PLAYER;
			(currentPlayerSymbol == player1Symbol) ? currentPlayerSymbol = player2Symbol : currentPlayerSymbol = player1Symbol;
		}

	}





}
