#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
int main()
{    
    int marks;
    int total;
    float average;
    string name;
    ofstream rout("Marksheet.txt");
    cout<<"Enter your name is "<<endl;
    rout<<name;
    rout<<total;
    rout<<average;
    cin>>name;
    int guj ,english,maths;
    cout<<"Enter gujarati marks is  "<<endl;
    cin>> guj;
    cout<<"Enter English marks is  "<<endl;
    cin>> english;
    cout<<"Enter MATHS marks is  "<<endl;
    cin>> maths;
    total = guj+english+maths;
    cout<<"The total marks is "<<total;
   
return 0;
}