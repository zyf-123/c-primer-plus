#if 0
#include<iostream>
using namespace std;
float p1(int x, int y);
float p1(int x, int y)
{
	float sum = 2.0 * x * y / (x + y);
	return sum;
}
int main(void)
{
	int x, y;
	while (cin >> x >> y)
	{
		if (x != 0 && y != 0)
		{
			cout << p1(x, y);
		}
	}
	return 0;
}
#endif