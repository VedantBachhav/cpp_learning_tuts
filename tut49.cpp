//       **** This is tutorial number 49 ***

//     *** Initialization list in Costructors in cpp ***

#include <iostream>
using namespace std;
/*
 Syntax for Initialization list in constructor :
 constructor (argument - list ) : initialization-section
 {
     assignment + other code;
 }

class test {
    int a;
    int b;
    public:
    test (int i ,int j) : a(i), b(j) {constructor - body}
};

*/

class test
{
    int a;
    int b;
    int c;

public:
    // test (int i ,int j, int k) : a(i),b(i+j)
    // test (int i, int j, int k) : a(i), b(j), c(i * j)
    // test (int i ,int j, int k) : a(10+i),b(2*j),c(i*j)
    // test (int i, int j, int k) : a(i), b(j), c(a*j)
    // test (int i, int j, int k) : a(i), b(j), c(a-b)
    // test (int i, int j, int k) : b(j), a(i+b) //--> RED Flag _ this will be create problem , beacause "a" will be initialized first.
     test(int i, int j, int k) // We declare values in the constructor body

    {
        // a = i;
        // b = j;
        // c = k;
        cout << "Constructor executed " << endl;
        cout << "Value of a is : " << a << endl;
        cout << "Value of b is : " << b << endl;
        cout << "Value of c is : " << c << endl;
    }
};
int main()
{
    test t(10, 5, 0);
    return 0;
}