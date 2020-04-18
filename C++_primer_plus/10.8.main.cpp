#include<iostream>
#include"10.h"
void main(void)
{
    List list;
    if (list.isempty())
    {
        cout << "List is empty" << endl;
    }

    uItem item1 = 1;
    uItem item2 = 2;
    uItem item3 = 3;

    list.add(item1);
    list.add(item2);
    list.add(item3);

    if (list.isempty())
    {
        cout << "List is empty" << endl;
    }
    else if (list.isfull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "Some items in the list" << endl;
    }

    list.visit(oringin);
    list.visit(x2);
    list.visit(half);

}
