#include <iostream>
using namespace std;
class sample1{
    public:
    void display(){
      cout<<"Display function call--"<<endl;
    }
};
class sample2{
    public:
    void show(){
        cout<<"Show methods call "<<endl;
    }
};
class sample3{
    public:
    void sum(){
        cout<<"Sum of methods call function.....";
    }
};
int main()
{
    sample1 obj1;
    obj1.display();
    sample2 obj2;
    obj2.show();
    sample3 obj3;
    obj3.sum();

    return 0;
}