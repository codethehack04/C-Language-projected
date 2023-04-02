// #include<iostream>
// using namespace std;
// int func1()
// {
//     int a=3;
//     int b=2;
//     cout<<"Total is :-"<<a+b;

// }
// int main(){
//     func1();
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class multi {
   int c;
public:

   multi(int a, int b) {
       c = a * b;
   }
     void display() {
       cout << c;
   }

};

int main() {

   int a = 10, b= 10;

   cin >> a >> b;
   multi obj(a, b);
   obj.display();
    

   return 0;
}