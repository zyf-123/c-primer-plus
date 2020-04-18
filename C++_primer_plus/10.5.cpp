#if 0
#include<iostream>
#include"stack.h"
using namespace std;

int main(void)
{
    Stack stack;
    double total = 0.0;
    customer pop;

    customer customer1 = { "jimmy", 1000 };

    if (stack.push(customer1))
    {
        cout << customer1.fullname << " push." << endl;
    }
    else
    {
        cout << "Stack full." << endl;
    }

    customer customer2 = { "hey", 200.0 };

    if (stack.push(customer2))
    {
        cout << customer2.fullname << " push." << endl;
    }
    else
    {
        cout << "Stack full." << endl;
    }

    if (stack.pop(pop))
    {
        cout << pop.fullname << " pop." << endl;
        total += pop.payment;
    }
    else
        cout << "Stack empty." << endl;


    customer customer3 = { "kitty", 3000.0 };
    if (stack.push(customer3))
        cout << customer3.fullname << " push." << endl;
    else
        cout << "Stack full." << endl;

    if (stack.pop(pop))
    {
        cout << pop.fullname << " pop." << endl;
        total += pop.payment;
    }
    else
        cout << "Stack empty." << endl;

    if (stack.pop(pop))
    {
        cout << pop.fullname << " pop." << endl;
        total += pop.payment;
    }
    else
        cout << "Stack empty." << endl;

    if (stack.pop(pop))
    {
        cout << pop.fullname << " pop." << endl;
        total += pop.payment;
    }
    else
        cout << "Stack empty." << endl;

    cout << "Total paymemt: " << total << endl;
    return 0;
}
#endif