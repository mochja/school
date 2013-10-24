
#include <conio.h>
#include "Axis.h"

Axis::Axis() {
	this->x = 0;
	this->y = 0;
	gotoxy(this->x, this->y);
}

Axis::Axis(int x, int y) {
	this->x = x;
	this->y = y;
	gotoxy(this->x, this->y);
}

Axis::~Axis() {

}

void Axis::setX(int x) {
	this->x = x;
	gotoxy(this->x, this->y);
}

void Axis::setY(int y) {
	this->y = y;
	gotoxy(this->x, this->y);
}

int Axis::getX() {
	return this->x;
}

int Axis::getY() {
	return this->y;
}
