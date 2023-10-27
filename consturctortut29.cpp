//          ***** This is tutorial 29 *****

//     *** constructors in cpp ***

#include <iostream>
using namespace std;
int a, b, c;
class complex
{
public:
    // Creating a constructor

    // Constructor is  special member function with same name as of the class. It is automatically invoked/execpute.
    // It is use to initializ the object of class.
    complex(void); // constructor declaration.

    void printNumber(void)
    {
        cout << "Your number is " << a << "+" << b << "i = "<< c << endl;
    }
};

complex ::complex(void) // Its a default constructor and as it take no parameters
{
    a = 10;
    b = 12;
    c = a + b;
}
int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

//     Characteristics of Constructor

/*
1. It should be declared in the public section of the object.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.

*/