#include <iostream>
using namespace std;
int main()
{
    // threre three types of loop
    // 1.for loop
    // 2.do while;
    // 3.while

    cout << "-------------------for loop---------------------------" << endl;
    // for(initialization;condition;updation)
    // {
    //     loop body(c++ code)
    // // }
    // int i;
    // for (i = 0; i <=10; i++)
    // {
    //     cout << i << endl;
    // }
    // // project
    // int n;
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << "Enter your value is:-";
    //     cin >> n;
    //     if (n % 2 == 0)
    //     {
    //         cout << "Even" << endl;
    //     }
    //     else
    //     {
    //         cout << "Odd" << endl;
    //     }
    //     cout << "Thank You";
    // }

    cout << "---------------While loop-------------------" << endl;
    // while (/* condition */)
    // {
    //     /* code */
    // }
    // int i=5;
    // while ( i <= 10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    cout<<"--------------------Do-While-Loop---------------"<<endl;
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=100);
    
    return 0;
}