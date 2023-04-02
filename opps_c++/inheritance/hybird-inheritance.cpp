// Hybrid inheritance means more than two or three child class 
#include <iostream>
#include <conio.h>
using namespace std;
class One
{
public:
void display()
{
    cout<<"Hello From One Class...\n";
}
};
class Two
{
public:
void display2()
{
    cout<<"Hello From Two Class...\n";
}
};
class Three:public One
{
public:
void display3()
{
    cout<<"Hello From Three Class...\n";
}
};
class Four:public Two
{
public:
void display4()
{
    cout<<"Hello From Four Class...\n";
}
};
class Five:public Three,public Four
{
public:
void display5()
{
    cout<<"Hello From Five Class...\n";
}
};
main()
{
Five obj;
obj.display();
obj.display2();
obj.display3();
obj.display4();
obj.display5();
getch();
}