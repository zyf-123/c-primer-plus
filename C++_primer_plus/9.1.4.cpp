#if 0
#include<iostream>
#include"9.4.h"
namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
        double total = 0.0;
        double max = ar[0];
        double min = ar[0];

        for (int i = 0; i < n; i++)
        {
            total += ar[i];
            s.sales[i] = ar[i];
            if (max < ar[i])
            {
                max = ar[i];
            }
            if (min > ar[i])
            {
                min = ar[i];
            }
        }
        for (int i = n; i < QUARTERS; i++)
        {
            s.sales[i] = 0.0;
        }

        s.average = total / n;
        s.max = max;
        s.min = min;
	}
    void setSales(Sales& s)
    {
        using namespace std;
        double total = 0.0;
        double max = 0.0;
        double min = 0.0;
        double input = 0.0;

        cout << "Enter 4 double number; " << endl;
        for (size_t i = 0; i < QUARTERS; i++)
        {
            cin >> input;
            if (i == 0)
            {
                max = input;
                min = input;
            }
            if (min > input)
            {
                min = input;
            }
            if (max < input)
            {
                max = input;
            }
            total += input;
            s.sales[i] = input;
        }
        s.average = total / QUARTERS;
        s.max = max;
        s.min = min;
    }
}
#endif