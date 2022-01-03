#include <iostream>
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


int main()
{
	Line l;
	lineInitViaPointer(&l);
	l.output();

	lineInitViaLink(l);
	l.output();
}

