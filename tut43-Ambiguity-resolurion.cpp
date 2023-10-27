//  ***  This is tutorial number 43***

// +**  Ambiguity Resolution in Inheritance in cpp  **+

#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "How are you ?" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "Kaise ho aap ?" << endl;
    }
};

class derived : public base1, public base2
{
    int a;
    public:
    void greet(){
        base1::greet(); // <----This is a ambiguity and its used for preference for function.
    }
};

int main()
{
//    Ambiutiy 1

    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    derived d;
    d.greet();

    return 0;
}