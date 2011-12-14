#include "Position.h"

Position::Position()
    : x(0), y(0)
{
}

Position::~Position()
{
}

std::ostream& operator<<(std::ostream& os, const Position& pos)
{
    return os << "(" << pos.x << " " << pos.y << ")";
}
