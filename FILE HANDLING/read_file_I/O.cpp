#include <iostream>
#include<fstream>
using namespace std;
int main()
{   
    ofstream hout("READ.txt");

    string name;
    cout<<"Enter your name :";
    cin>>name;

    hout<<name  + " is my name";

    hout.close();

    ifstream hin("READ.txt");

    string content;
    hin>>content;
    cout<<"The content of the file of is:"<<content;
    return 0;
}