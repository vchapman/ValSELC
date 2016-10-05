#include <stdio.h>

void initializeBoard();
char playerTurn();
void printBoard();
char board[3][3];


void main(args){
	char userGuess;
	initializeBoard();
	//while(1){
		userGuess = playerTurn();
		printBoard();
	//TODO }
	

}

void initializeBoard(){
	int x, y;
	for(x = 0; x < 3; x++){
		for(y= 0; y < 3; y++){
			board[x][y] = ' ';
		}
	}
}

char playerTurn(){
	//TODO
}

void printBoard(){
	int x,y,z;
	y = 0;
	z = 0;
	for(x = 0; x < 3; x++){
		printf("%c | %c | %c", board[x][y], board[x][y + 1], board[x][y + 2]);
		if(z < 2){
			printf("\n----------\n");
			z++;
		}
	}
}