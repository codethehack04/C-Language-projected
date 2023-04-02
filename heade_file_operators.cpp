#include<iostream>
// there are two type of header files:
// 1.system header files:It comes with the complier;
// 2.user defined header files:It written by the programming 

using namespace std;
int main()
{ 
    int a=10,b=13;
    // cout<<"Hello world programming language";
    cout<<"Operators in c++"<<endl;
    cout<<"The following are the types of operators in c++ "<<endl;
    // Arithmetic operators
    cout<<" \n The value of a+b is "<<a+b;
    cout<<" \n The value of a*b is "<<a*b;
    cout<<" \n The value of a-b is "<<a-b;
    cout<<" \n The value of a/b is "<<a/b;
    cout<<" \n The value of a++is " <<a++;
    cout<<" \n The value of ++a is "<<++a;
    cout<<" \n The value of --a is "<<--a;
    cout<<" \n The value of a-- is "<<a--;
    
    //relational operators 
    cout<<"The value of a == b"  << (a==b) <<endl; 
    cout<<"The value of a < b"  << (a<b) <<endl; 
    cout<<"The value of a > b"  << (a>b) <<endl; 
    cout<<"The value of a <= b"  << (a<=b) <<endl; 
    // cout<<"The value of a >= b"<<(a>=b)<<endl; 
    
    //logical operaotr
    cout<<"The value (a==b) && (a>=b) is " <<((a==b)&& (a>=b));
    cout<<"The value (a==b) && (a>=b) is " <<((a==b)|| (a>=b));
    cout<<"The value a<=b is " <<(!(a>=b));

    return 0;
}