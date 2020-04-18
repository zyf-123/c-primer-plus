#if 0;
#include<iostream>
#include<array>
using namespace std;
int main()
{
	long double sum;
	const int num = 100;
	array<long double, 101> arr;
	arr[0] = arr[1] = 1;
	for (int i = 2; i <= num; i++)
	{
		arr[i] = arr[i - 1] * i;
	}
	for (int i = 0; i <= num; i++)
	{
		cout << i<<"!=" << arr[i] << endl;
	}
	return 0;
}
#endif