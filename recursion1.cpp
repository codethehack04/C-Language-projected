#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    int a;
    cout << "Enter value for factorial";
    cin >> a;
    cout << " Factorial of " << a << " is " << factorial(a);
    return 0;
}