#pragma once

#include "Location.h"
#include "Graphics.h"

class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell(Location& in_loc, Color in_color);
	bool IsInsideBoard(const Location& inside)const ;
	int GetWidth()const;
	int GetHeight()const;
private:
	static constexpr Color  color = Colors::Gray;
	static constexpr int dimension = 20;
	int width = 16;
	int height = 20;
	Graphics& gfx;
};