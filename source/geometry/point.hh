//
// Copyright Josh Bennett 2018
//

#pragma once

///
/// Basic point geometry.
///
class point
{
    int x_;
    int y_;

public:
    point();
    point(int x, int y);
    int get_sum();
};
