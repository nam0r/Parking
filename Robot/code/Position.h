#ifndef __POSITION__
#define __POSITION__

class Position {
	private:
		int _x;
		int _y;

	public:
		Position();
		void setX(int x);
		void setY(int y);
		int getX();
		int getY();
};

#endif