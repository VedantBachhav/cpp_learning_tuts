//  *****This is a tuturial 8.*****

//Constants, Manipulators and operator

#include<iostream>
#include<iomanip>//header file for using "setw" manipoletter.

using namespace std;
int main(int argc, char const *argv[])
{
    // int a = 45;
    // cout<<"The value of a was : "<<a;
    // a = 46;
    // cout<<"\nThe value of a is : "<<a;
   
   
    //   ********** Constants in c++******
    /*used for declear constant vaue *for ex we are declear a variable and i declear 
    this variable repet then variable value not changed */
    
    // const int a = 3;
    // cout<<"The value of a was "<<a<<endl;
    //a = 45 * You will get an error beacause 'a' is a constant.


    //*******"setw"Manipuleters*******


    // int a=3, b=78, c=6789,d=543;
    // cout<<"The value of A is : "<<a<<endl;
    // cout<<"The value of b is : "<<b<<endl;
    // cout<<"The value of c is : "<<c<<endl;

    // cout<<"The value of A is : "<<setw(9)<<a<<endl;
    // cout<<"The value of B is : "<<setw(15)<<b<<endl;
    // cout<<"The value of C is : "<<setw(10)<<c<<endl;
    // cout<<"The value of d is : "<<setw(12)<<d<<endl;



//******Operator Precedence********
int a = 45, b = 4,c;
 c = ((((a*5)+b)-45)+87);
cout<<"this expression is "<<c;


    return 0;
}
