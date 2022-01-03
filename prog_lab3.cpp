﻿#include <iostream>
#include "Point.h"
#include "Line.h"
using namespace std;



void lineInitViaPointer(Line* l) {
	cout << "\n\n\nPoint init via pointer\n";
	Point p(0, 0), p1(1,1);
	l->init(p, p1);
}

void lineInitViaLink(Line &l) {
	cout << "\n\n\nPoint init via link\n";
	Point p(2, 2), p1(3, 3);
	l.init(p, p1);
}

bool setPointCoordinates(Point& p, float x, float y) {
	if (&x == nullptr || &y == nullptr) return false;
	p.x = x;
	p.y = y;
	return true;
}

int main()
{
	//Возврат значений через * и &
	Line l;
	lineInitViaPointer(&l);
	l.output();

	lineInitViaLink(l);
	l.output();

	//Дружественная функция
	cout << "\n\n\nFriend function\n";
	Point p(0, 0);
	p.output();
	setPointCoordinates(p, 4, 5);
	cout << "\n";
	p.output();
}

