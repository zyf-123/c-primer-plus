#if 0
#include<iostream>
#include"1.h"
int main()
{
    using namespace std;
    golf g[10];
    int n = 0;
    cout << "Enter the information of golf player: " << endl;

    while ((n < 10) && (setgolf(g[n])))
    {
        n++;
        cout << "Next golf player: " << endl;
    }

    cout << "Show all golf player information: " << endl;
    for (int i = 0; i < n; i++)
    {
        shoewgolf(g[i]);
    }

}
#endif 