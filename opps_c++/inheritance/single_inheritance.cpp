// sinngle inheritance mean only one parents and one child class
#include <iostream>
#include <conio.h>
using namespace std;
// Single Level Inheritance:
// Base Class:
class Father
{
public:
    void display() // object
    {
        cout << "Hello From Father Class...\n";
    }
};
// Inherited Class Or Sub Class:
class Son : public Father // parents class declartion
{
public:
    void display2()
    {
        cout << "Hello From Son Class...";
    }
};
main()
{
    Son obj;
    obj.display();
    obj.display2();

    getch();
}