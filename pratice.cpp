#include<iostream>

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