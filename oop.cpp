/*         *****This is tutorial 21 *****

//   tut21 **** classes public,and private access modifiers in c++ ****



       **** ----->tut 20 ---->Object oriented programming (oops) in c++ ****


            -----> PROCEDUR ORIENTED PROGRAMMING (pop)<-----

+ Consists of writing a set of instructions for the computer to follw.
+ Main focus is on function and not on flow of data.
+ Function can either use local or global data.
+ Data moves openly from function to function.   */

#include<iostream>
using namespace std;

 class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
    void setData(int a1, int b1,int c1);    //Declaration
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};




void Employee :: setData(int a1, int b1, int c1)
 {
    a = a1;
    b = b1;
    c = c1;
 }
int main()
{
    Employee harry;
    harry.d = 343;
    harry.e = 89;
    harry.setData (1,98,4);
    harry.getData();


    return 0;
}



// example

// #include<iostream>
// using namespace std;
// class oop{
//     private:
//     int c,d,e;
//     public:
//     int a,b=2;
//     void setata(int c1,int d1, int e1){
//       c=c1;
//       d=d1;
//       e=e1;
//     }
//     void display(void){
//         cout<<"Value of a is : "<<a<<endl;
//         cout<<"Value of b is : "<<b<<endl;
//         cout<<"Value of c is : "<<c<<endl;
//         cout<<"Value of d is : "<<d<<endl;
//         cout<<"Value of e is : "<<e<<endl;
//     }
// };

// int main()
// {
//     oop o;
//     o.a=12;
//     o.setata(13,14,15);
//     o.display();
//     return 0;
// }
