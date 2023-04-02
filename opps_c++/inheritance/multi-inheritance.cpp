// Multiinheritance means more than one parents class
#include <iostream>
#include <conio.h>
using namespace std;
class One // first parents class
{
public:
    void display()
    {
        cout << "Hello From One Class...\n";
    }
};
class Two // second parents class
{
public:
    void display2()
    {
        cout << "Hello From Two Class...\n";
    }
};
class Three : public One, public Two // child class declartion
{
public:
    void display3()
    {
        cout << "Hello From Three Class...\n";
    }
};
main()
{
    Three obj;
    obj.display();
    obj.display2();
    obj.display3();

    getch();
}