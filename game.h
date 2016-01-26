#ifndef GAME_H
#define GAME_H
#include "board.h"

typedef struct move {
	int x;
	int y;
} move;

class game {
	public:
		game();
		bool getActivePlayer();
		virtual bool makeMove(int x, int y, int turn);
		virtual bool withdraw(int x, int y);
		move senteLastMove;
		move goteLastMove;
	private:
		bool activePlayer = true;
		board bd;
};
#endif
