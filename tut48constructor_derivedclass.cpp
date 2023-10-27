//      *** This is tutorial number 48 ***

//   *** Code exampal on : Constructors in Derived class in cpp ****

#include <iostream>
using namespace std;

/*
case 1 :    
class B : class A {
    // Order of execution of constructor  --> first A() then B().

case 2 :
class A : class B , class C {
    // Order of execution of constructor  --> first B() then C() and A().
};

case 3 :
class A : class B , virtual public C {
    // Order of execution of constructor  --> first C() then B() and A().
};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base 1 class constructor called" << endl;
    }
    void printdata1(void)
    {
        cout << "The value of data is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base 2 class constructor called" << endl;
    }
    void printdata2(void)
    {
        cout << "The value of data is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void printdataderived(void)
    {
        cout << "The value of derive 1 is : " << derived1 << endl;
        cout << "The value of derive 2 is : " << derived2 << endl;
    }
  
};

int main()
{
Derived vedant(1,2,3,4);
vedant.printdata1();
vedant.printdata2();
vedant.printdataderived();
    return 0;
}