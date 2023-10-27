//   ***** This is tutorial number 73 ****
//  refrence ---->  https://en.cppreference.com/w/cpp/container/map
//    *** Map in C++ STL ***

#include<iostream>
#include<map>
#include<string>
using namespace std;


//  Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["jack"] = 88;
    marksMap["vedant"] = 100;
    
    marksMap.insert({{"Kozume",56},{"zalak",90},{"Gaurav",99}});//-----> for inserting
    map<string, int> :: iterator itr;
    for ( itr=marksMap.begin();itr!=marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    
    cout<<"The size of the map  : "<<marksMap.size()<<endl;
    cout<<"The max size of the map  : "<<marksMap.max_size()<<endl;
    cout<<"The empty of the map  : "<<marksMap.empty()<<endl;

    return 0;
}