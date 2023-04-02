#include <iostream>
using namespace std;
struct student
{
    char fname[50];
    int rno;
    float marks;
} s[100];
int main()
{
    int i;
    int n;
    cout << "enter your student information:-" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter Roll no :-" << endl;
        cin >> s[i].rno;
        cout << "Enter your name :" << endl;
        cin >> s[i].fname;
        cout << "Enter your marks:-" << endl;
        cin >> s[i].marks;
    }
    cout << "STUDENT INFORMATION ";
    for (i = 1; i <= n; i++)
    {
        cout << "Roll Number\n"
             << s[i].rno << endl;
        cout << "Name:\n"
             << s[i].fname << endl;
        cout << "your marks \n"
             << s[i].marks << endl;
    }
    return 0;
}