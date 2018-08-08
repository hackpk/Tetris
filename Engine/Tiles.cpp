#include "Tiles.h"

Tiles::Tiles(const Location & in_loc)
	:
	loc(in_loc)
{
}

void Tiles::Draw(Board & brd,const Color& in_color)
{
	brd.DrawCell(loc, in_color);
}

void Tiles::MoveBy(const Location & delta_loc)
{
	loc.Add(delta_loc);
}
