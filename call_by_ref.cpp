#include <iostream>
#include <conio.h>
using namespace std;
void change(int *num)
{
cout<<"Before Addition The Value Is:"<<*num<<"\n";
*num = *num + 100;
cout<<"After Addition The Value Is:"<<*num<<"\n";
return ;
}
int main()
{
int x = 100;
cout<<"Before Using Function The Value Is:"<<x<<"\n";
change(&x);
cout<<"After Using Function The Value Is:"<<x<<"\n";
getch();
}