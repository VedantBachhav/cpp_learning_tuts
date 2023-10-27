           /****Pointers in c++****
            
        This is a tuturial 13.

*What is a pointer? ------> The data type holds the address of other data type.*/
  //variable chya pahile * lavala te value print hoil and & lavala tr address print hoil .


#include<iostream>

using namespace std;

int main()
{
    int a=3;
    int *b= &a;

    cout<<"addres of a is"<<b<<endl;  //"b" is a pointer and stored the address  of "a".
    cout<<"The addres of a is"<<&a<<endl;
    //"&"" ------>(addres of) operator.

    cout<<"The addres of b is"<<*b<<endl;
    //"*" ------>(value at) Dereference operator.


    //      *****Pointer to pointer*******

    int **c = &b;
    cout<<"addres of b is"<<&b<<endl;
    cout<<"addres of b is"<<c<<endl;
    cout<<"The value at addres c is"<<*c<<endl;
    cout<<"The value at addres value_at(value at c) of a is"<<**c<<endl;
          
    return 0;
}
