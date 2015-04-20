#pragma once
#include "ChessPiece.h"
class Queen : public ChessPiece
{
public:
	Queen(char color);
	~Queen();
	std::string getPiece();
	void move();
};

