#include <iostream>
using namespace std;

// struct employee
// {
//     int employee_Id;
//     char favChar;
//     float salary;
// };

typedef struct employee
{
    int employee_Id; // 4
    char favChar;    // 1
    float salary;    // 4
} ep;

union money
{
    int rice;    // 4
    char car;    // 1
    float pound; // 4
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinnner
    };
    Meal m1 = lunch;
    cout<<(m1==2);
  
    //     cout<<breakfast;
    //    cout<<lunch;
    //    cout<<dinnner;

    // ep hello;
    // union money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.rice;
    // cout<<m1.car;
    // // hello.employee_Id = 3;
    // hello.favChar = 'c';
    // hello.salary =1200;
    // cout<<hello.employee_Id<<endl;
    // cout<<hello.favChar<<endl;
    // cout<<hello.salary<<endl;
}