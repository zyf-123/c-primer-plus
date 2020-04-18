#include<iostream>
#include"10.h"
int List::add(uItem& item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool List::isempty()
{
    return top == 0;
}

bool List::isfull()
{
    return top == (MAX - 1);
}

void List::visit(void(*pf)(uItem&))
{
    for (int i = 0; i < top; i++)
    {
        cout << "#" << i << ": ";
        pf(items[i]);
    }
}

void oringin(uItem& item)
{
    cout << item << endl;
}

void x2(uItem& item)
{
    item = item * 2;
    cout << item << endl;
}

void half(uItem& item)
{
    item = item / 2;
    cout << item << endl;
}