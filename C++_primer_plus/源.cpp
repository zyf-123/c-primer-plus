#include<iostream>
#include<cmath>
using namespace std;
void maopao(int *arr);

int main()
{
	int arr[11];
	int newl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	maopao(arr);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cin >> newl;
	for (int i = 0; i < 11; i++)
	{
		if (newl > arr[i])
		{
			int temp;
			temp = arr[i];
			arr[i] = newl ;
			newl = temp;
			continue;
		}
		
	}
	for (int i = 0; i < 11; i++)
	{
		cout << arr[i] << " ";
	}
	
	
	exit(0);
}
void maopao(int * arr)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (*(arr + j) < * (arr + j + 1))
			{
				int temp;
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}
