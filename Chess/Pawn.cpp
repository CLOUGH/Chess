#include "Pawn.h"

#include <string>
Pawn::Pawn(char color) : ChessPiece(color)
{

}


Pawn::~Pawn()
{
}

std::string Pawn::getPiece(){
	return "P";
}

void Pawn::move(){

}