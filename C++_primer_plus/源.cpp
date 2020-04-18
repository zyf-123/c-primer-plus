#if 0;
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

#include<iostream>
#include<string>
using namespace std;
long long n, ans;
string s;
int main() {
	cin >> n;
	while (n--) {
		cin >> s;
		if (s[s.length() - 1] == 'y') {
			if (s[s.length() - 2] == 't') {
				if (s[s.length() - 3] == 'p') {
					if (s[s.length() - 4] == 'c') {
						if (s[s.length() - 5] == 'a') {
							ans++;
						}
					}
				}
			}
		}
	}
	cout << ans;
	return 0;
}


#include <iostream>
using namespace std;
int main(void) 
{
	long long int a, b, c;
	int d;
	cin >> a >> b >> c;
	if (a == b == c)
		d = 9;
	else if (a == b || b == c || a == c)
		d = 1;
	else
		d = 0;

	return d;
}

#endif