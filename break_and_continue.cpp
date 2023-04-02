#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=30;i++)
    {
        // if(i==5)
        // {
        //     break;
        // }
        if(i==10)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}