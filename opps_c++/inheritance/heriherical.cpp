// Heriherical inheritance mean more than two child class .
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
class Two:public One   // declartion only first one parents class 
{
public:
void display2()
{
    cout<<"Hello From Two Class...\n";
}
};
class Three:public Two   // declartion only first one parents class 
{
public:
void display3()
{
    cout<<"Hello From Three Class...\n";
}
};
class Four:public Three   // declartion only first one parents class 
{
public:
void display4()
{
    cout<<"Hello From Four Class...\n";
}
};
main()
{
One obj4;
obj4.display();
Two obj1;             
obj1.display2();  //this declartion only for dispLay in the printing 
Three obj2;
obj2.display3();
Four obj3;
obj3.display4();


// obj1.display();   // This is obj display first declartion 
// obj2.display();
// obj3.display();


getch();
}
