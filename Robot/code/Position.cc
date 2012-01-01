#include "Position.h"

Position::Position() {
	_x = 0;
	_y = 0;
}

void Position::setX(int x) {
	_x = x;
}

void Position::setY(int y) {
	_y = y;
}

int Position::getX() {
	return _x;
}

int Position::getY() {
	return _y;
}