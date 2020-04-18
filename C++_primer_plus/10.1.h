#if 0
#pragma once
#include<iostream>
using namespace std;
class Bank
{

private:
	string name;
	string id;
	int num;
public:
	Bank() { };
	Bank(const string name, const string id, int num) { this->name = name; this->id = id; this->num = num; }
	void display(Bank& s)const;
	void addnum(int n);
	void reducenum(int n);
};
#endif