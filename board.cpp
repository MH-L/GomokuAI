#include "board.h"

board::board() {
	grid = new int*[DEFAULT_SIZE];
	for (int i = 0; i < DEFAULT_SIZE; i++)
		grid[i] = new int[DEFAULT_SIZE];
}

board::board(int size) {
	this->size = size;
	grid = new int*[size];
	for (int i = 0; i < size; i++)
		grid[i] = new int[size];
}

bool board::makeMove(int x, int y, int turn) {
	if (x >= size || y >= size || (turn != SENTE_STONE && turn != GOTE_STONE))
		return false;
	grid[y][x] = turn;
	return true;
}

board::~board() {
	for (int i = 0; i < size; i++)
		delete[] grid[i];
	delete[] grid;
}
