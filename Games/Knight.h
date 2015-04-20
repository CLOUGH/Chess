#pragma once
#include "ChessPiece.h"
class Knight : public ChessPiece
{
public:
	Knight(char color);
	~Knight();
	std::string getPiece();
	void move();
};

