#pragma once
#include "ChessPiece.h"
class Pawn : public ChessPiece
{
public:
	Pawn(char color);
	~Pawn();
	std::string getPiece();
	void move();
};

