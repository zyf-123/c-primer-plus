#if 0;
#include<iostream>
using namespace std;
struct information
{
	string firname;
	string lsname;
	char grade;
	int age;
};
int main(void) 
{
	information first;
	cin >> first.firname;
	cin >> first.lsname;
	cin >> first.grade;
	cin >> first.age;
	cout << "Your age is :" << first.age << endl;
	cout << "Your name is :" << first.lsname << first.firname << endl;
	cout << "Your grade is :" << char(first.grade+1) << endl;
	return 0;
	
}
#endif