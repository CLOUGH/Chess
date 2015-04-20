#pragma once
#include "ChessPiece.h"
class King : public ChessPiece
{
public:
	King(char color);
	~King();
	std::string getPiece();
	void move();
};

