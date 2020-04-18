#if 0
#include<iostream>
using namespace std;
int fill_array(double* array,int size)
{
	int i = 0;
	while (cin >> *(array + i))
	{
		i++; 
		if (i == size)
			break;
	}
	return i;
}
void show_array(double* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(array + i);
	}
	return ;
}
void reverse_array(double* array, int size)
{
	for (int i = 0; i < size/2; i++)
	{
		double temp;
		temp = *(array+i);
		*(array + i) = *(array + size - i-1);
		*(array + size - i) = temp;
	}
	return;
}


int main(void)
{
	double arr[10];
	int i=0;
	i = fill_array(arr, 10);
	show_array(arr, i);
	reverse_array(arr, i);
	show_array(arr, i);
	return 0;
}
#endif
