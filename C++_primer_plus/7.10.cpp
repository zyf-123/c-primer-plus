#if 0
#include<iostream>
using namespace std;
double calculate(double x, double y, double(*p)(double  ,double  ))
{
	return p(x,y);
}
double point(double x, double y)
{
	return x * y;
}
double add(double x, double y)
{
	return x + y;
}
void main(void)
{
	double x, y;
	while (cin >> x >> y)
	{
		cout << calculate(x, y, add);
		cout << calculate(x, y, point);
	}
}
#endif