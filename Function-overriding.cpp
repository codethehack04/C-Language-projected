#include <iostream>
using namespace std;
int sum(float a, int b)
{
    cout << "Using function with 2 argument" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Using function with 3 argument" << endl;
    return a + b + c;
}
// Calculate the vloume of a cyclinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}
// calculate the vloume of cube
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum 4 and 8 is " << sum(4, 8) << endl;
    cout << "The sum 4 , 8 and 12 is " << sum(4, 8, 12) << endl;
    cout << "The volume of a cyclinder is " << volume(4, 8) << endl;
    cout << "The volume of a cube is " << volume(4, 8, 7) << endl;

    return 0;
}