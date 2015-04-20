#include "ChessPiece.h"
#include <iostream>

ChessPiece::ChessPiece(char color) : color(color){
}


ChessPiece::~ChessPiece()
{
}

char ChessPiece::getColor(){
	return this->color;
}