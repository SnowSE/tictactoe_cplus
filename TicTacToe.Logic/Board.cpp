#include "pch.h"
#include "Board.h"


Board::Board()
{
	std::vector<std::vector<char>> board1(3, std::vector<char>(3, ' '));
	Board::grid = board1;
}

char Board::GetSquare(int row, int col) const
{
	return grid[row][col];
}

bool Board::SetSquare(int row, int col, char player)
{
	return false;
}

char Board::GameStatus()
{
	return ' ';
}

