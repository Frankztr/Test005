#include "Board.h"
void Board::showBoard() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			std::cout << board[i][j] << " ";
		}
		std::cout << std::endl;
	}
};

bool Board::canMoveTo(int i, int j) {
	if ((int)board[i][j] == 47)return true;
	if (isWhite) {
		if ((int)board[i][j] > 96) return false;
		else return true;
	}
	else {
		if ((int)board[i][j] > 96)return true;
		else return false;
	}
}