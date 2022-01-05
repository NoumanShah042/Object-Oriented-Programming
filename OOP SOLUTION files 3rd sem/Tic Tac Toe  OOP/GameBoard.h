#ifndef GameBoard_H
#define GameBoard_H

enum PlayerTurn
{
	FIRST_PLAYER=1,SECOND_PLAYER=2
};
enum GameStatus
{
	DRAW,WIN ,IN_PROGRESS
};
class GameBoard
{
	char data[3][3];
	GameStatus gameStatus = IN_PROGRESS;
	int validMoveCount = 0;

public:
	
	GameBoard();
	void displayBoard();
	bool markBoard(char pos, char playerSymbol);
	bool isValidPosition(char pos);
	bool isalreadyMarked(char pos);
	int getValidMovesCount();
	GameStatus getGameStatus();
	void changeGameStatus(char symbol);
	bool isHorizontal(char symbol);
	bool isVertical(char symbol);
	bool isDigonal(char symbol);

 };






#endif