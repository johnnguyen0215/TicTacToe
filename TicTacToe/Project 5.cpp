
#include <iostream>

void placePiece(char board[][3], int* freeSpaces, int row, int column){
	int freeCheck = row*3 + column;
	if (freeSpaces[freeCheck] != 0){
		board[row][column] = 'X';
		freeSpaces[freeCheck - 1] = 0;
	}
}


void printBoard(char board[][3]){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			std::cout << board[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void checkWinner(char board[][3]){
	for (int i = 0; i < 3; i++){

	}
}


void checkPlayerWins(char board[][3]){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (board[i][j] == 'X'){
				
			}
		}
	}
}

int main(){
	const int n = 3;
	int freeSpaces[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	char board[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			board[i][j] = ' ';
		}
	}
	placePiece(board, freeSpaces, 1, 1);
	placePiece(board, freeSpaces, 1, 2);
	placePiece(board, freeSpaces, 0, 0);
	placePiece(board, freeSpaces, 2, 2);
	printBoard(board);
	
}