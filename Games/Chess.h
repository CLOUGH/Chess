#pragma once
#include "ChessBoard.h"
class Chess
{
private: 
	ChessBoard board = ChessBoard();
	std::string player[2];
	int turn;
	char input;
	void mainMenu();
	void moveMenu();
	void selectedPieceMenu(int row, char column);
public:
	Chess();
	~Chess();

	void play();
};
