#pragma once
#include <string>
#include <iostream>
class ChessPiece
{
protected:
	char color;
public:
	ChessPiece(char color);
	~ChessPiece();
	char getColor();
	virtual std::string getPiece() = 0;
	virtual void move() =0;
};

