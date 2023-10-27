// *** This is tutorial number 41 *** //

// ****** Multiple Inheritance : Deep Dive with code example ******

// ----------====-------------------------====-------------------------====-------------------- //
// ----------====-------------------------====-------------------------====-------------------- //

/* Syntax for inheriting in multiple Inheritance
 Syntax for inheriting in multiple Inheritance

 class DerivedC : visibility-mode base1, visibility-mode base2
 {
     Class body of class "Derivedc"
 };   */

#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base1 is : " << base1int << endl;
        cout << "The value of base1 is : " << base2int << endl;
        cout << "The value of base1 is : " << base1int + base2int << endl;
    }
};
// we are adding more classes needed to your requirement
int main()
{
    derived d1;
    d1.set_base1int(89);
    d1.set_base2int(11);
    d1.show();

    return 0;
}












// #include<iostream>
// #include<string>
// using namespace std;

// class student{
//     public:
//     int rollno;
//     string studentname;
//     void setid(int m1,string name){
//         rollno= m1;
//         studentname = name;
//     }
    
// };
// class teacher{
//     public:
//     int teacherid;
//     string teachername;
//      void setid1(int t1,string tname){
//         teacherid= t1;
//         teachername = tname;
//      }
//     };
// class derived : public student, public teacher{
//     public: 
//     void display(void){
//         cout<<"student id is : "<< rollno<<endl;
//         cout<<"student name is : "<< studentname<<endl;
//         cout<<"teacher id is : "<< teacherid<<endl;
//         cout<<"teacher name is : "<< teachername<<endl;
//     }

// };
// int main()
// {
// 	teacher t;
//     derived d;
//     d.setid(34,"vedant");
//     d.setid1(4,"sunil");
//     d.display();
//     return 0;
// }