#pragma once
#include "ChessPiece.h"
class Rook : public ChessPiece
{
public:
	Rook(char color);
	~Rook();
	std::string getPiece();
	void move();
};

