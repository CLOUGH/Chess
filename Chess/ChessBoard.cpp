#include <iostream>

#include "ChessBoard.h"
#include "Pawn.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"
#include "Knight.h"
#include "Bishop.h"
using namespace std;

ChessBoard::ChessBoard(){
	//Initialize board to default 
	for (int row = 0; row < this->ROW_SIZE; row++){
		for (int column = 0; column < this->COLUMN_SIZE; column++){
			this->board[row][column] = nullptr;
		}
	}
	//Add chesspieces to board
	//Add pawn
	for (int column = 0; column < this->COLUMN_SIZE; column++){
		this->board[1][column] = new  Pawn('B');
		this->board[6][column] = new Pawn('W');
	}
	//Add rooks
	this->board[0][0] = new Rook('B');
	this->board[0][7] = new Rook('B');
	this->board[7][0] = new Rook('W');
	this->board[7][7] = new Rook('W');

	//Add knights to board
	this->board[0][6] = new Knight('B');
	this->board[0][1] = new Knight('B');
	this->board[7][6] = new Knight('W');
	this->board[7][1] = new Knight('W');

	//Add bishops to board
	this->board[0][2] = new Bishop('B');
	this->board[0][5] = new Bishop('B');
	this->board[7][2] = new Bishop('W');
	this->board[7][5] = new Bishop('W');

	//Add queen to board
	this->board[0][3] = new Queen('B');
	this->board[7][3] = new Queen('W');

	//Add king to board
	this->board[0][4] = new King('B');
	this->board[7][4] = new King('W');
}
ChessBoard::ChessBoard(const ChessBoard &obj){
	cout << "copy constructor" << endl;
	for (int row = 0; row < this->ROW_SIZE; row++){
		for (int column = 0; column < this->COLUMN_SIZE; column++){
			*board[row][column] = *obj.board[row][column];
		}
	}
}
ChessBoard::~ChessBoard(){
	cout << "copy destructor" << endl;
	for (int row = 0; row < this->ROW_SIZE; row++){
		for (int column = 0; column < this->COLUMN_SIZE; column++){
			if (this->board[row][column]){
				delete(this->board[row][column]);
			}			
			this->board[row][column] = nullptr;
		}
	}
}
void ChessBoard::paint(){

	char column_letter = 'a';
	for (int row = 0; row < this->ROW_SIZE; row++){
		column_letter = 'a';
		//Draw Top Border 
		if (row == 0){
			this->drawHorizontalBorder(column_letter);
		}
		
		//Draw board
		for (int columnHeight = 0; columnHeight<3; columnHeight++){
			
			for (int column = 0; column < this->COLUMN_SIZE; column++){
				if (column == 0 ){
					this->drawVerticalBorder(row, columnHeight);				
				}
				if (columnHeight == 1 && this->board[row][column]){
					
					if (column % 2 ^ row % 2){
						cout << "* " << board[row][column]->getColor() << board[row][column]->getPiece() << " *";
					}
					else{
						cout << "  " << board[row][column]->getColor() << board[row][column]->getPiece() << "  ";
					}

				}
				else{
					if (column % 2 ^ row % 2){
						cout << "******";
					}
					else{
						cout << "      ";
					}
				}
				if (column == 7){
					this->drawVerticalBorder(row, columnHeight);
				}
			}

			cout << endl;
		}		
		//Draw BOTTOM Border 
		if ( row == 7){
			this->drawHorizontalBorder(column_letter);
		}
	}
}
void ChessBoard::drawVerticalBorder(char const & row, char const & columnHeight){

	if (columnHeight == 1){
		cout <<" " << row + 1 << " ";
	}
	else{
		cout << "   ";
	}

}
void ChessBoard::drawHorizontalBorder(char &column_letter){
	cout << "   ";
	for (int column = 0; column < this->COLUMN_SIZE; column++){
		cout << "   " << column_letter++ << "  ";
	}
	cout << endl;
}