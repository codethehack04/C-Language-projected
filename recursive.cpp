#include <iostream>
using namespace std;
int main()
{
    int factorial(int);
    int fact,value;
    cout<<"Enter The Number:";
    cin>>value;
    fact=factorial(value);
    cout<<"Factorial Of A Number Is:"<<fact<<"\n";
    return 0;
}
int factorial(int n)
{
    if(n<0)
    return(-1);
    if(n==0)
    return(1);
    else
    {
        return(n*factorial(n-1));
    }
    
}  