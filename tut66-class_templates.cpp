//   *&* This is tutorial number 66 *&*

//  *** Class Templates with Default Parmeters in c++ ****
// after class T3 run in dev c++ 
#include<iostream>
using namespace std;

template <class T1 = int, class T2 =float, class T3 = char>
class vedant{
    public: 
    T1 a;
    T2 b;
    T3 c;
    vedant(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of A is "<<a<<endl;
        cout<<"The value of B is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

int main()
{
    vedant<> v(4,23.45,'y');
    v.display();
    cout<<endl;
    vedant<int,char,char> d(4,'a','z');
    d.display();
    return 0;
}
