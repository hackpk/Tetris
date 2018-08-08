#pragma once

class Location
{
public:
	void Add(const Location& delta_loc)
	{
		x += delta_loc.x;
		y += delta_loc.y;
	}

	int x;
	int y;
};
