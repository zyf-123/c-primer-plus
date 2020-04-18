#if 0
#include<iostream>
using namespace std;
int fill_array(double* ar_begin, double* ar_end)
{
    double temp = 0.0;
    int i = 0;
    double* ar_tmp = nullptr;
    for (ar_tmp = ar_begin; ar_tmp < ar_end; ar_tmp++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input preocess terminated.\n";
            break;
        }
        else if (temp < 0)
        {
            break;
        }

        *ar_tmp = temp;
        i++;
    }

    return i;
}
void show_array(const double* ar_begin, const double* ar_end)
{
    const double* ar_tmp = nullptr;
    unsigned int i = 0;
    for (ar_tmp = ar_begin; ar_tmp < ar_end; ar_tmp++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *ar_tmp << endl;
        i++;
    }
}
void revalue(double* ar_begin, double* ar_end, double r)
{
    for (double* ar = ar_begin; ar < ar_end; ar++)
    {
        *ar *= r;
    }
}
void main(void)
{
    double properties[10];

    int size = fill_array(properties, properties + 10);
    show_array(properties, properties + size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(properties, properties + size, factor);
        show_array(properties, properties + size);
    }

    cout << "Done.\n";

    return;
}

#endif