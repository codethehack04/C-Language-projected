#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    // string st = "Pratham bhai";
    // ofstream out("sample.txt"); // used to write a text in file/stream
    // out << st;

    string st2;
    ifstream in("sample1.txt"); // used to write a text in file/stream
    // in >> st;
    getline(in, st2);
    cout << st2;
    return 0;
}  