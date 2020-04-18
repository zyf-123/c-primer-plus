#if 0
#include<iostream>
#include"БъЭЗ.h"

int main(void)
{
	using namespace std;
	Bank bank[2];
	bank[0] = { "zyf","001",10 };
	bank[1] = { "nsh","001",20 };
	bank[0].display(bank[0]);
	bank[0].addnum(20);
	bank[0].display(bank[0]);

	return 0;
};
#endif