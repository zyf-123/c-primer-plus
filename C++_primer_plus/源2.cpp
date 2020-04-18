#if 0
#include<iostream>
using namespace std;


int p2(void)
{
	double high_inch, BMI, pouds;
	cout << "Please input your high_inch" << endl;
	cin >> high_inch;
	high_inch *= 0.0254;
	cout << "Please input your pouds" << endl;
	cin >> pouds;
	pouds *= 0.4535;
	BMI = pouds / high_inch;
	cout << "your BMI is " << BMI << endl;
	return 0;
}
int p4(void)
{
	long long secondss;
	int days, hours, second;
	cout << "Please hours" << endl;
	cin >> secondss;
	days = secondss / (24 * 60 * 60);
	secondss = secondss % (24 * 60 * 60);
	hours = secondss / (60 * 60);
	second = secondss % (60 * 60 );
	cout << days << "days" << hours << "hours" << second << "seconds" << endl;
	return 0;
}

int main(void)
{
	p4();
	return 0;
}
#endif

