#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{   
    int a=4;int b=5;
    // cout << "the sum of the of the value of a and b is " << sum(4, 5);
   cout<<"the value of a is "<<a<<"the valueof b is "<<b<<endl;
   swap(a,b);
    cout<<"the value of a is "<<a<<"the valueof b is "<<b<<endl;
    return 0;
}