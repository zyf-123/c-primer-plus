#if 0
#include <iostream>
using namespace std;
void GetInput(double* grade, unsigned int* number)
{
    cout << "You can enter up to 10 grades( -1 to quit): " << endl;

    while (cin >> grade[(*number)++])
    {
        if (grade[*number - 1] == -1)
        {
            break;
        }
    }
    (*number)--;
}
void PrintArray(const double* grage, const unsigned int number)
{
    cout << "The grade is: " << endl;

    for (unsigned int i = 0; i < number; i++)
    {
        cout << grage[i] << " ";
    }

    cout << endl;
}
void CalAvg(const double* grade, const unsigned int number)
{
    double total = 0.0;
    cout << "The average is :";
    for (unsigned int i = 0; i < number; i++)
    {
        total += grade[i];
    }
    cout << total / number << endl;
}
void main(void)
{
    double grade[10];
    unsigned int enter = 0;

    GetInput(grade, &enter);
    PrintArray(grade, enter);
    CalAvg(grade, enter);

    return ;
}
#endif
