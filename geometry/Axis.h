
#ifndef _AXIS_H
#define _AXIS_H

class Axis
{
private:
	int x;
	int y;

public:
	Axis();
	Axis(int, int);
	~Axis();
	void setX(int);
	void setY(int);
	int getX();
	int getY();
};

#endif
