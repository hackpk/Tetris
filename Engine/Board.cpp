#include "Board.h"

Board::Board(Graphics & gfx)
	:
	gfx(gfx)
{
}

void Board::DrawCell(Location & in_loc, Color in_color)
{
	gfx.DrawRect(in_loc.x * dimension, in_loc.y *dimension, dimension, dimension, in_color);
}

int Board::GetWidth() const
{
	return width;
}

int Board::GetHeight() const
{
	return height;
}
