// Multilevel inheritance mean more than one child class are created
#include <iostream>
#include <conio.h>
using namespace std;
class One
{
public:
void first()
{
    cout<<"Hello From One Class...\n";
}
};
class Two:public One
{
public:
void second()
{
    cout<<"Hello From Two Class...\n";
}
};
class Three:public Two
{
public:
void third()
{
    cout<<"Hello From Three Class...\n";
}
};
main()
{
Three obj;
obj.first();
obj.second();
obj.third();

return 0;
}