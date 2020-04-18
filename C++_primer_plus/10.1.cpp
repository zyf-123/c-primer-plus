#if 0
#include<iostream>
#include"1.h"
void Bank::display(Bank& s)const
{
	cout << "账号:" << s.id << "存款人" << s.name << "存款数:" << s.num << endl;
}
void Bank::addnum (int n)
{
	num = num + n;
}
void Bank::reducenum(int n)
{
	num = num - n;
}
#endif 