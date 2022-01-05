#ifndef GAME_Board_H
#define GAME_Board_H

enum PlayerTurn {  FIRST_PLAYER='W'  ,  SECOND_PLAYER='B' };
enum PlayerSymbol{	FIRST_PLAYER_SYMBOL = 'W', SECOND_PLAYER_SYMBOL = 'B'};
enum GameStatus{  FIRST_PLAYER_WIN,SECOND_PLAEYER_WIN,DRAW,IN_PROGRESS };

#define ROWS 19
#define COLS 19

class GomokuBoard
{
	char board[ROWS][COLS];
	GameStatus gameStatus = IN_PROGRESS;
	PlayerTurn currentPlayer = FIRST_PLAYER;
	int validMoveCount = 0;
	bool isValidPos(int r, int c);
	bool isAlreadyMarked(int r, int c);
	
public:
	
	GomokuBoard();
	void displayBoard();
	PlayerTurn getCurrentPlayer();
	GameStatus getGameStatus();
	int getValidMOvesCount();
	
	void switchPlayerTurn();
	int markBoard(int r, int c);


};







#endif
