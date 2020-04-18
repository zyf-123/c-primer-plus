#if 0
#pragma once

#include<iostream>
using namespace std;
class golf
{
private:
	 static const int len = 40;
	char fullname[len];
	int handicap;
public:
	golf() { strcpy(fullname, ""); handicap = 1; }
	void setgolf(golf& g, const char* name, int hc);
	int setgolf(golf& g);
	void handicap(golf& g, int hc);
	void shoewgolf(const golf& g);
};
#endif