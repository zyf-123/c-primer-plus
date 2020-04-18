#if 0
#pragma once
#include<iostream>
using namespace std;
class Move
{
private :
	double x;
	double y;
public :
	Move(double a = 0, double b = 0);
	void showmove()const;
	Move add(const Move& m)const;
	void reset(double a = 0, double b = 0);
};
Move::Move(double a = 0, double b = 0)
{
	x = a;
	y = b;
}
void Move::showmove()const
{
	cout << x << y;
}
Move Move::add(const Move& m)const
{
	Move n;
	n.x = m.x + x;
	n.y = m.y + y;
}

void Move::reset(double a = 0, double b = 0)
{
	x = a;
	y = b;
}
#endif