#if 0
#include"1.h"
#include<cstring>
#include<iostream>
void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{

	if (std::cin >> g.fullname)//Ã»ÓÐÌí¼ÓÅÐ¿Õ
	{
		std::cin >> g.handicap;
		return 1;
	}
	return 0;

}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void shoewgolf(const golf& g)
{
	std::cout << g.fullname << g.handicap;
}
#endif 