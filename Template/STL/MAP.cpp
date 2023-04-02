#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    map<string, int> marksMap;
    marksMap["Pratham"] = 45;
    marksMap["code"] = 65;
    marksMap["kali"] = 35;
    marksMap["robot"] = 75;
    marksMap.insert({{"Kalilinux"s,145},{"Karm",576}});
    map<string, int> :: iterator iter;
    for(iter=marksMap.begin(); iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<" "<<endl;;
    }

    cout<<"The size is"<<marksMap.size()<<endl;
    cout<<"The max size is"<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is"<<marksMap.empty     ()<<endl;

        return 0;
}