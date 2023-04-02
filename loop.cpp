// #include <iostream>
// using namespace std;

// int main()
// {

//     int i,j,k;

//    for(i=1 ;i<=5;i++){

//      cout<<"PRATHAM"<<endl;;
//   }
//    for(k=0;k<=6;k++){
//     cout<<"Adani"<<endl;
//    }
//    for(j=0;j<=5;j++){
//         cout<<"TATA"<<endl;
//     }

// }

#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (int i = 0; i <= 7; ++i)
    {
        for (int j=1; j <= i; ++j)
        {
            cout <<"*";
        }
         cout << "\n";
    }
    return 0;
}


