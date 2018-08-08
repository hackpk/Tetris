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

bool Board::IsInsideBoard(const Location & inside) const
{
	return inside.x >= 0 && inside.x <= width && inside.y >= 0 && inside.y <= height;
}


int Board::GetWidth() const
{
	return width;
}

int Board::GetHeight() const
{
	return height;
}
