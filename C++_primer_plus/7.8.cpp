#if 0
#include<iostream>
using namespace std;
struct cost
{
	double spend;
};
const char* arr[4] = { "spring", "summer", "autumn", "winter" };
void fill(double* pa)
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter " << arr[i] << " expenses: ";
        cin >> pa[i];
    }
}
void show(double* pa)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << ": $" << pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
void main(void)
{
    double p[4];
    fill(p);
    show(p);
}
#endif 