//  *** This is tutorial number 39 ***

//     **+** Protected access modifier in cpp**+**

#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    private:
    int b;
};

/* Table for a protected member :
                           Public derivation         Private derivation          Protected derivation
1. Private members         Not Inherited             Not Inherited               Not Inherited
2. Protected members       Protected                 Private                     Protected
3. Public members          Public                    Private                     Protected
*/

class derived : public base{

};

int main()
{
    base b;
    derived d;
    cout<<d.a;//will not work since a is protected in both base as well as derived class.
    
    return 0;
}