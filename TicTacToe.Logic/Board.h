#pragma once
#include <vector>

class Board
{
private:
	std::vector<std::vector<char>> grid;

public: 
	Board();
	char GetSquare(int row, int col) const;
	bool SetSquare(int row, int col, char player);
	char GameStatus();
};

