#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream pout("call.txt");
    cout << "Enter your name is:-";
    string name;
    int total;
    int maths,comp;
    cin >> name;
    pout << "My name is " + name;
    cout<<"Enter maths  "<<endl;
    cin>> maths;
    pout<<"My maths marks is " + maths;
     cout<<"Enter computer "<<endl;
    cin>> maths;
    pout<<"My computer marks is " + comp;
    total = maths+comp;
    pout<<"My total marks is " + total ;
    pout.close();

    // string name;
    // ifstream pin("sample60.txt");
    // //   pin>>contant;
    // getline(pin, name);
    // cout << name;
    return 0;
}