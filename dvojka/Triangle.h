
#ifndef _TRIANGLE_H
#define _TRIANGLE_H

#include "Axis.h"

class Triangle: public Axis
{
private:
	int h;
	void print(char);
public:
	Triangle();
	Triangle(int, int);
	void show();
	void hide();
};

#endif
