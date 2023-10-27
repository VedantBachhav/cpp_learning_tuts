//   **** This is tutorial number 65 ****

//   **&** c++ Templates : Templates with Multiple Parameters **&**

#include <iostream>
using namespace std;
/*  *syntax*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THAN TWO)
template<class T1, class T2> ......... (COMMA SEPRATED)
class  nameofclass{

    // body
}
*/

template <class T1, class T2, class T3>
class myClass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;

myClass(T1 a, T2 b, T3 c){
    data1 = a;
    data2 = b;
    data3 = c;
}
    void display()
    {
        cout << this->data1 <<endl<< this->data2<<endl<<data3;
        // cout <<data1 <<endl<<data2; //self create
    }
};

int main()
{
    myClass<int, char,float> obj(1,'c',1443.89909);
    obj.display();
    return 0;
}