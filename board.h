#ifndef BOARD_H
#define BOARD_H
#define EMPTY_SPOT 0
#define SENTE_STONE 1
#define GOTE_STONE 2
#define DEFAULT_SIZE 15 // default size of the board
class board {
	public:
		board();
		board(int size);
		// Makes a move at given position for the given player.
		// If it succeeds, returns true. False otherwise.
		bool makeMove(int x, int y, int turn);
		// Withdraws a move at given position.
		// If it succeeds, returns true. False otherwise.
		bool withdraw(int x, int y);
		~board();
	private:
		int **grid; // Dynamic array has to be used since a static array's
					// size has to be known at compile time, thus impossible
					// to resize.
		int size = DEFAULT_SIZE; // size of the board
};

#endif
