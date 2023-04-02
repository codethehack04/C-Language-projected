#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    // ofstream out;
    // out.open("open.txt");

    // out<<"This is me \n";
    // out<<"This is also me";
    // out.close();

    ifstream in;
    string st;
    in.open("READ.txt");

    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}