#include <iostream>
using namespace std;
int main()
{
    int myarray[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<myarray[i][j]<<" ";
        }
        cout<<endl;
    }
    
} 
