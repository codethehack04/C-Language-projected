#include <iostream>
using namespace std;
int main()
{
    int x = 8;
    int *y = &x;
    cout << "The address of a is :" << &x << endl;
    cout << "The address of a is :" << y << endl;
    //&-->address of operators;

    //*----> Derefrence of operators
    cout << "The value at address b  is " << *y << endl;
    return 0;

    // pointer to pointer
    int **c = &y;
    cout << "The address of c is :" << &y<< endl;
    cout << "The address of c is :" << c << endl;

}
