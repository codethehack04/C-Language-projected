#include <iostream>
#include <vector>
using namespace std;
template <class T>

void display(vector<T> &v)
{
    cout << "display this vectors" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << "";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    vector<char> vec2(4);
     // vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2);
    display(vec3);
    vector<int> vec4(7,23);
    display(vec4);
    // vector<int>::iterator iter = vec4.begin();
    // vec4.insert(iter+2 ,445);
    
    
   
    // int element, size;
    // cout << "Enter the size of  your vector " << endl;
    // cin >> size;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "Enter an element to add to this vectors";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
  
    return 0;
}