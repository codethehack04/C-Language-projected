#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

//   call by value
// int swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "\n the After value of a is" << a << " and the after value of b is " << b;
//     return a, b;
// }
//call refrence
int  swapPointer(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    // cout<<*a ;
    return *a,*b;
}

int main()
{
    int a = 5;
    int b = 8;
    //   cout<<"the value of a is"<<a<<" and the  value of b is "<<b;
    //    sum(a,b);
    cout << "the  before value of a is" << a << " and the before value of b is " << b << endl;
    // swap(a, b);
    swapPointer(&a,&b);
    cout << "the  before value of a is" << a << " and the before value of b is " << b << endl;
    
    return 0;
}
