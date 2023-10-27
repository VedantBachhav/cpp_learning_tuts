//       ****This is tutorial 25****

//       **/** Array of Object and passing Objects as Function Argumentsin cpp  **/**

#include <iostream>
using namespace std;

class Employee
{
    int id;
   // int salary;
    int  salary;

public:
    void setId(void)
    {
        salary = 345;
        cout << "Enter the id of employee" << endl;
        cin >> id;
       
    }
    void getId(void)
    {
        cout << "The Id of this employee is : "<<id<<endl;
        cout<<" salary of this employee is : "<<salary <<endl;
    }
};

int main() 
{
    int i;
    Employee vb[7];
    for (i = 0; i < 7; i++)
    {
        vb[i].setId();
        vb[i].getId();
    }

    return 0;
}