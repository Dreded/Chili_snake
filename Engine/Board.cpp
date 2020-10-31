#include "Board.h"
#include <assert.h>

Board::Board(Graphics& gfx)
	:
	gfx(gfx)
{
}

void Board::DrawBorder(Color c)
{
	gfx.DrawRectDim(0, 0, width * dimension, dimension, c); // Top
	gfx.DrawRectDim(0, 0, dimension, height * dimension, c);	// Left
	gfx.DrawRectDim((width-1) * dimension, 0, dimension, (height * dimension)-1, c); // Right
	gfx.DrawRectDim(0, (height - 1) * dimension, width * dimension,dimension, c); // Bottom
}

void Board::DrawCell(const Location& loc, Color c)
{
	assert(loc.x >= 1);
	assert(loc.x < width-1);
	assert(loc.y >= 1);
	assert(loc.y < height-1);
	gfx.DrawRectDim(loc.x * dimension + cellPadding, loc.y * dimension + cellPadding, dimension - (cellPadding * 2), dimension - (cellPadding * 2), c);
}

int Board::GetGridWidth() const
{
	return width;
}

int Board::GetGridHeight() const
{
	return height;
}

bool Board::IsInsideBoard(const Location& loc) const
{
	return loc.x >= 1 && loc.x < width-1
		&& loc.y >= 1 && loc.y < height-1;
}
