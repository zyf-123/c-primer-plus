#if 0
#include<iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void p1(box s)
{
	cout << s.maker;
	cout << s.height << s.length << s.width <<s.volume;

}
void p2(box* s)
{
	s->volume = s->height * s->length * s->width;
}
int main(void)
{
	box s = { "nihao",10,10,10,0 };
	p1(s);
	p2(&s);
	p1(s);
}
#endif