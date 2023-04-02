// operators
#include <iostream>
using namespace std;
int main()
{
  int a = 10, b = 20;
  // Arithmetic operators
  cout << "---------------------Arithmetic operators-----------------" << endl;
  cout << "The value of a+b is :" << (a + b) << endl;
  cout << "The value of a-b is :" << (a - b) << endl;
  cout << "The value of a*b is :" << (a * b) << endl;
  cout << "The value of a/b is :" << (a / b) << endl;
  cout << "The value of a++ is :" << (a++) << endl;
  cout << "The value of a-- is :" << (a--) << endl;
  cout << "The value of ++a is :" << (++a) << endl;
  cout << "The value of --a is :" << (--a) << endl;

  //   relational operators
  cout << " ------------------relational operators--------------------" << endl;
  cout << "The value of a>b is :" << (a > b) << endl;
  cout << "The value of a>=b is :" << (a >= b) << endl;
  cout << "The value of a<=b is :" << (a <= b) << endl;
  cout << "The value of a==b is :" << (a == b) << endl;
  cout << "The value of a!=b is :" << (a != b) << endl;

  // logical operators
  cout << "--------------logical operators------------------" << endl;
  cout << "The value  of (a>=b) && (a<=b) is  " << ((a >= b) && (a <= b)) << endl;
  cout << "The value  of (a>=b) && (a<=b) is  " << ((a >= b) || (a <= b)) << endl;
  cout << "The value  of (!(a==b)) is  " << (!(a == b)) << endl;

  return 0;
}