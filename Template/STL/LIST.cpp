#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{ // 6 8 9
    list<int> list1;
    list1.push_back(3);
    list1.push_back(8);
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(6);
    list1.push_back(7);

    display(list1);
    // list1.pop_back();// backing removing
    // display(list1);
    // list1.pop_front();//fronting removing

    // display(list1);
    // list1.pop_back();
    // display(list1);

    // list1.remove(5);
    // display(list1);

    // Sorting the list
    //  list1.sort();  //Ascending order placed
    //  display(list1);
     
     //reversing the list 
     list1.reverse();
     display(list1);
    list<int> list2(3); // Empty list of size
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;

    *iter = 4;
    iter++;
    *iter = 5;
    iter++;
    display(list2);


    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    //  display(list2);
    list1.sort();
    list2.sort    ();
    list1.merge(list2);
    cout << "After merging value is:-";
    display(list1);
    return 0;
}