
#include <iostream>
#include <conio.h>
#include "Triangle.h"

using namespace std;

void Triangle::print(char x) {
	gotoxy( getX(), getY() );
	cout << x;
	for (int i = 1; i < h; i++) {
		int s = i+i+1;
		gotoxy( getX()-i, getY()+i );
		for ( int j = 0; j < s; j++) {
            cout << x;
		}
	}
	gotoxy(1,1);
}

Triangle::Triangle(int x, int y): Axis(x, y) {
	h = 4;
}

Triangle::Triangle(): Axis() {
    h = 9;
}

void Triangle::show() {
	print('*');
}

void Triangle::hide() {
    print(' ');
}

