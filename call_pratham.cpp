// #include <iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// int main()
// {
//     cout << "the sum of the of the value of a and b is " << sum(4, 5);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }

// // This will not swap a and b
// void swap(int a, int b){ //temp a b
//     int temp = a;        //4   4  5
//     a = b;               //4   5  5
//     b = temp;            //4   5  4
// }

// // Call by reference using pointers
// void swapPointer(int* a, int* b){ //temp a b
//     int temp = *a;          //4   4  5
//     *a = *b;               //4   5  5
//     *b = temp;            //4   5  4
// }

// // Call by reference using C++ reference Variables
// // int &
// void swapReferenceVar(int &a, int &b){ //temp a b
//     int temp = a;          //4   4  5
//     a = b;               //4   5  5
//     b = temp;            //4   5  4
//     // return a;
// }

// int main(){
//     int x =4, y=5;
//     // cout<<"The sum of 4 and 5 is "<<sum(a, b);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     // swap(x, y); // This will not swap a and b actual argument
//     // swapPointer(&x, &y); //This will swap a and b using pointer reference
//     swapReferenceVar(x, y); //This will swap a and b using reference variables
//     // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// call by reference
void swappointervar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 5;
    int b = 10;
    // cout<<"the total 5 and 10 :-"<<sum(5,10);
    cout << "the value before swap of a is  " << a << " and value before swaping b is  " << b << endl;
    swap(a, b);
    swappointervar(&a,&b);
    cout << "the value after  swap of a is  " << a << " and value after swaping b is  " << b << endl;
    return 0;
}