#pragma once

#include "Location.h"
#include "Board.h"
#include "Graphics.h"
class Tiles
{
public:
	Tiles() = default;
	Tiles(const Location& in_loc);
	void Draw(Board& brd,const Color& In_color);
	void MoveBy(const Location& delta_loc);
private:
	Location loc;
};