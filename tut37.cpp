// This is tutorial no 37

//    ***Inheritance Syantax and visibility mode in cpp***

#include <iostream>
using namespace std;

// Base class

class employee
{
public:
    int id;
    float salary;
    employee(int inId)
    {
        id = inId;
        salary = 34.00;
    }
    employee() {}
};

// Derived class syntax

/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
}*/

/*Note:
 1. Default visibility mode is private.
 2. Public visibility mode : Public members of the base class becomes public members of the derived class.
 3. Private visibility mode : Public members of the base class becomes private members of the derived class.
 4. Private members are never inherited.
*/
// Creating a Programmer class derived from Employee Base class

class programmer : public employee
{
public:
    programmer(int inId)
    {
        id = inId;
    }
    int language = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), vedant(2);
    cout << harry.salary << endl;
    cout << vedant.salary << endl;
    programmer skillF(10);
    cout << skillF.language << endl;
    cout << skillF.id << endl;
    skillF.getdata();

    return 0;
}
