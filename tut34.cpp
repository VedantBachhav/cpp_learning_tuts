//        *****This is tutorial 34 *****
//     **/** Copy Constructors in cpp **/**

#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    // When no copy constructor is  found then compiler supplies its own copy constructor
    // given 5 lines is a copy constructor
    number(number &obj)
    {
        cout << "Copy consturctor called!!!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x, y(109), z(100), z2;

    x.display();

    y.display();

    z.display();

    number z1(z); // copy construtor invoked
    z1.display();

    z2 = y; // copy constructor not
    z2.display();

    number z3 = z; // copy constructor invoked
    z3.display();
    // z1 should exactly resemble z or x or y

    return 0;
}

