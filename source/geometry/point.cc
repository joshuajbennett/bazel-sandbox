//
// Copyright Josh Bennett 2018
//

#include "point.hh"

point::point()
{
	x_ = 0.0;
	y_ = 0.0; // Hey!
	x_ = y_ + 10.5;
}

point::point(int x, int y)
{
	x_ = x;
	y_ = y;
}

int point::get_sum()
{
	return x_ + y_;
}
