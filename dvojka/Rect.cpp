
#include "Rect.h"
#include <iostream>
#include <conio.h>

using namespace std;

Rect::Rect() : Axis() {
	this->a = 6;
	this->b = 4;
}

Rect::Rect(int x, int y) : Axis(x,y) {
	this->a = 6;
	this->b = 4;
}

void Rect::print(char x) {
	gotoxy( getX(), getY() );
	for ( int i = 0; i < this->a; i++ ) {
		cout << x;
	}
	for ( int i = 1; i < this->b - 1; i++) {
		gotoxy( getX(), getY() + i);
		cout << x;
		gotoxy( getX()+this->a-1, getY() + i );
		cout << x;
	}
	gotoxy( getX(), getY()+this->b-1 );
	for ( int i = 0; i < this->a; i++ ) {
		cout << x;
	}
	gotoxy(1, 1);
}

void Rect::show() {
	print('*');
}

void Rect::hide() {
	print(' ');
}
