#pragma once
#include<iostream>
#include<string>
typedef unsigned long uItem;
using std::cout;
using std::cin;
using std::endl;

class List
{
private:
    enum { MAX = 20 };
    uItem items[MAX];
    int top;

public:
    List() { top = 0; }
    int add(uItem& item);
    bool isempty();
    bool isfull();
    void visit(void(*pf)(uItem&));
};

void oringin(uItem& item);
void x2(uItem& item);
void half(uItem& item);

