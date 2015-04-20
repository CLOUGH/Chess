#pragma once
#include "ChessPiece.h"

class ChessBoard
{
private:
	ChessPiece* board[8][8];
	static const int ROW_SIZE = 8;
	static const int COLUMN_SIZE = 8;
	void ChessBoard::drawHorizontalBorder(char &column_letter);
	void ChessBoard::drawVerticalBorder(char const & row, char const & columnHeight);
public:
	ChessBoard();
	ChessBoard(const ChessBoard &obj);
	~ChessBoard();
	void paint();
};

