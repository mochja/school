
#ifndef _RECT_H
#define _RECT_H

#include "Axis.h"

class Rect: public Axis
{
private:
	int a;
	int b;
	void print(char);
public:
	Rect();
	Rect(int, int);
	void show();
	void hide();
};

#endif
