#pragma once

#include "Location.h"
#include "Board.h"
#include "Graphics.h"
class Tiles
{
public:
	Tiles(const Location& in_loc);
	void Draw(Board& brd,const Color& In_color);
private:
	Location loc;
};