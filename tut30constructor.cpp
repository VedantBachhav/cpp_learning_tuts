//          ***** This is tutorial 30 and *****
//          ***** This is tutorial 31 *****
//  *** Parameterized and Default Construction in cpp ***
//         and ***tut 31***
//  ***constructor overloading in cpp***

// for reference use cpp math sqrt function website

//          ****  Example no 1   ****

/*#include <iostream>
using namespace std;
int a, b;
class complex
{
public:
    complex(int,int);

    void printNumber(void)
    {
        cout << "Your number is " << a << "+" << b << "i " << endl;
    }
};
complex::complex(int x, int y){
a = x;
b = y;
// c = a + b;
}
int main()
{
    //Implicit call
    complex a(4,6);
    a.printNumber();

    //Explicit call
    complex b = complex(5,7);

    b.printNumber();
    return 0;
}*/

//          ****  Example no 2    ****

// parameterlized constructor
/*
#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    point p(1, 1);
    p.displaypoint();

    point q(5, 7);
    q.displaypoint();
    return 0;
}*/

//  ***constructor overloading in cpp tut 31***

#include <iostream>
using namespace std;

class comlax
{
    int a, b, c;

public:
    comlax(int x, int y)
    {
        a = x;
        b = y;
    }
    // comlax(int x, int y, int z)
    // {
    //     a = x;
    //     b = y;
    //     c = z;
    // }
    comlax(int x)
    {
        a = x;
        b = 0;
    }
    void printnumber(void)
    {
        cout << "Your number is " << a << "+" << b << "i "<<endl; //<<c<<endl;
    }
};
int main()
{
    comlax c1(4, 6);
    c1.printnumber();

    comlax c2(4);
    c2.printnumber();
    // comlax c3(4,5,6);
    // c3.printnumber();
    return 0;
}











// #include <iostream>
// using namespace std;
// class cons
// {
// public:
//     int n;
//     int m;
//     int p, q, r;
//     void cons1(int a, int b)
//     {
//         m = a;
//         n = b;
//     }
//     void display()
//     {
//         cout << "the value of a " << m << "  and value of b " << n << endl;
//     }
// };
// int main()
// {
//     cons c;
//     c.cons1(4, 89);
//     c.display();

//     return 0;
// }
