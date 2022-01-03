#include <iostream>
#include <string>
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

	//Операторы + и ++
	cout << "\n\n\n+ and ++ operators\n";
	Point p1(0, 0);
	p1.output();
	cout << "\n";
	p1++;
	p1.output();
	cout << "\n";
	++p1;
	p1.output();
	cout << "\n";
	Point sum;
	sum = p + p1;
	sum.output();



	//Конкатенация строк
	cout << "\n\n\nString processing\n";
	string s1 = "hello", s2 = "world";
	string s3 = s1 + " " + s2;
	cout << s3;

	//Вставка
	s3.insert(6, "beautiful ");
	cout << "\n" << s3 << "\n";

	//Удаление
	s3.erase(6, 10);
	cout << "\n" << s3 << "\n";

	//Сравнение
	if (s1 != s2) {
		cout  << s1 << " and " << s2 << " aren't equal\n";
	}
}

