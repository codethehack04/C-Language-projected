#include <iostream>
using namespace std;
class student
{
public:   // Access modifier
   int Rollno;  
   string name; // Data member
   void show()                  // This is object 1 " void show"
   {
      cout << "Your number is:- " << Rollno << endl;   
      cout << "your name = " << name;
   }
};
int main() // member function
{   

   //Object declaration 
   student obj;    //- >obj is object name            Be always declare the data member like int ,string etc
   obj.name = "pratham";  //-> if you any store the data in object  obj.datamember= "What you store the data in the object datamember"
   obj.Rollno = 40;
   obj.show();      // obj .object 1 
   return 0;
}