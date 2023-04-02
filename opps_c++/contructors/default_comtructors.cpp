#include <iostream>
using namespace std;
class Employee
{
public:
    Employee()
    {
        cout << "Hello,From Default Constructor......";
    }
    void display()
    {
        cout << "Hello From Display";
    }
};
int main()
{
    Employee e1;
    e1.display();
    return 0;
}