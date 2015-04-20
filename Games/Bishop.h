#pragma once
#include "ChessPiece.h"
class Bishop : public ChessPiece
{
public:
	Bishop(char color);
	~Bishop();
	std::string getPiece();
	void move();
};

