#include<iostream>
#include<string>
using namespace std;
class num
{
private:
	int number;
public:
	num(int n = 0);
	const num& topval(const num& n)const;
	void show(void)const
	{
		cout << this->number;
	}
};

num::num(int n)
{
	this->number = n;//显示的使用this指针； 
}
const num& num::topval(const num& n) const
{
	if (n.number > number)
		return n;    //如果传入的类的数字大小大于本身，则返回传入类 
	else             //否则返回原本对象 
		return *this;
}
int main(void)
{
	num Num[10] = { 1,2,3,4,5,6,7,8,9,25 };
	const num* top = &Num[0];
	for (int i = 1; i < 10; i++)
	{
		top = &top->topval(Num[i]);
	}
	cout << "最大值是:";
	top->show();
	return 0;
}



