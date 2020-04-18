#if 0
#include<iostream>
#include<string>
using namespace std;
class Person {
private:
    // static const LIMIT = 25 编译报错，C++不支持默认int
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person() { lname = ""; fname[0] = '\0'; }
    Person(const string& ln, const char* fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};
Person::Person(const string& ln, const char* fn)
{
    lname = ln;
    strncpy(fname, fn, LIMIT);
}
void Person::Show() const
{
    cout << fname << ", " << lname << endl;
}
void Person::FormalShow() const
{
    cout << lname << ", " << fname << endl;
}
#endif