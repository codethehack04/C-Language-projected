#include <iostream>
using namespace std;
int main()
{
    int marks[] = {12, 23, 45, 67};
    int mathsMarks[4];
    mathsMarks[0] = 14;
    mathsMarks[1] = 15;
    mathsMarks[2] = 16;
    mathsMarks[3] = 17;

    cout << mathsMarks[0] << endl;
    cout << mathsMarks[1] << endl;
    cout << mathsMarks[2] << endl;
    cout << mathsMarks[3] << endl;
    cout << mathsMarks[4] << endl;
    // mathsMarks[4]=14;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << "The value of array " << i << " is " << marks[i] << endl;
    }
    return 0;

    // pointer and array

    int *p = marks;
    cout<<"The value of marks[0] is "<<*p;
    cout<<"The value of marks[0] is "<<*(p+1);
    cout<<"The value of marks[0] is "<<*(p+2);
    cout<<"The value of marks[0] is "<<*(p+3);
    

}