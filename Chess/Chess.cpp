#include <iostream>
#include "Chess.h"

using namespace std;
Chess::Chess()
{
	player[0] = "WHITE";
	player[1] = "BLACK";
	turn = 0;
};

Chess::~Chess()
{
}

void Chess::play(){
	do{
		
				
		mainMenu();
		
		system("cls");
	} while (input != 0);
	
}

void Chess::mainMenu(){
	cout <<  player[turn] << "'s Turn" << endl << endl;
	this->board.paint();
	cout << endl << endl << "Options :" << endl;
	cout << "1 MOVE" << endl;
	cout << "0 EXIT" << endl;
	cin >> input;
	if (input == '1'){
		moveMenu();
	}
	
}

void Chess::moveMenu(){
	int row;
	char column;

	system("clear");
	cout << player[turn] << "'s Turn" << endl << endl;
	this->board.paint();
	cout << "Select chess piece : " << endl;
	cout << "Row(1,2,3,...) :";
	cin >> row;
	cout << "Column(a,b,c) : ";
	cin >> column;

	selectedPieceMenu(row, column);
}
void Chess::selectedPieceMenu(int row, char column){
	char new_input;
	system("clear");
	cout << player[turn] << "'s Turn" << endl << endl;
	this->board.paint();
	cin >> new_input;
}