#ifndef BOARD_H
#define BOARD_H
#define EMPTY_SPOT 0
#define SENTE_STONE 1
#define GOTE_STONE 2
#define DEFAULT_SIZE 15
class board {
	public:
		board();
		board(int size);
		bool makeMove(int x, int y, int turn);
		~board();
	private:
		int **grid; // Dynamic array has to be used since a static array's
					// size has to be known at compile time, thus impossible
					// to resize.
		int size = DEFAULT_SIZE;
};

#endif
