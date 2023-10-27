//  *****This is a tuturial 6.*****


#include<iostream>
/* There are two types of header files : 
1) System header files : It comes with the compiler.
for ex. #include<iostream>
2) User define header files : It is written by the programer. 
for ex. #include "this.h" note : make new file like as 'this.h' for compile*/
using namespace std;
int main(int argc, char const *argv[])
{
    int a=4, b=5;
    cout <<"Operaters in c++";
    cout <<"\nFollowing are the types of operators in c++";
    //Arithmetic operators
    // cout<<"\nThe value of a+b is  : "<<a+b;
    // cout<<"\nThe value of a-b is  : "<<a-b;
    // cout<<"\nThe value of a*b is  : "<<a*b;
    // cout<<"\nThe value of a/b is  : "<<a/b;         
    // cout<<"\nThe value of a%b is  : "<<a%b;
    cout<<"\nThe value of a ++ is : "<<a++;
    cout<<"\nThe value of a -- is : "<<a--;
    cout<<"\nThe value of ++a is  : "<<++a;
    cout<<"\nThe value of --a is  : "<<--a;
    // cout <<endl;

    // Assignment operators ---> Used to assign the values of variables.
    // int a=4, b=6;
    // char d= 'd';


   // Comaparison operators
//   cout<<"\nFollowing are the comparison operators in c++"<<endl;
//    cout <<"The value of a==b is "<<(a==b)<<endl;
//    cout <<"The value of a!=b is "<<(a!=b)<<endl;
//    cout <<"The value of a>=b is "<<(a>=b)<<endl;
//    cout <<"The value of a<=b is "<<(a<=b)<<endl;
//    cout <<"The value of a<b is "<<(a<b)<<endl;
//    cout <<"The value of a>b is "<<(a>b)<<endl;

//    Logical operators
//    cout<<"Following are the logical operators in c++"<<endl;
//    cout<<"The value of this logical and operator is ((a==b) && (a<b)): "<<((a==b) && (a>b))<<endl;
//    //"&&" is the sign of and operator ** this condition both logic are true then print 1 but one true and one false that time this logic is false and compilar print 0;
//    cout<<"The value of this logical or operator is ((a==b) || (a<b)): "<<((a==b) ||(a>b))<<endl;
//    cout<<"The value of this logical not operator is (!(a==b) && (a<b)): "<<(!(a==b))<<endl;
//     //"!" is the sign of a not operator ** this condition compilar print opposite codition if logic is true then comilar print false and logic is false compilar print true.
    return 0;
}




// Example


// #include<iostream>
// using namespace std;

// int main()
// {
//    int a =52,b=10;


// //    cout<<"The value of : "<<a+b<<endl;
// //    cout<<"The value of : "<<a-b<<endl;
// //    cout<<"The value of : "<<a*b<<endl;
// //    cout<<"The value of : "<<a/b<<endl;
// //    cout<<"The value of : "<<(a%b)<<endl;
// //    cout<<"The value of : "<<a++<<endl;
// //    cout<<"The value of : "<<a--<<endl;
// //    cout<<"The value of : "<<++a<<endl;
// //    cout<<"The value of : "<<--a<<endl;



// //    cout<<"The value of : "<<(a==b)<<endl;
// //    cout<<"The value of : "<<(a!=b)<<endl;
// //    cout<<"The value of : "<<(a<=b)<<endl;
// //    cout<<"The value of : "<<(a>=b)<<endl;
// //    cout<<"The value of : "<<(a<b)<<endl;
// //    cout<<"The value of : "<<(a>b)<<endl;

// cout<<"The value of : "<<(a>=b)&&(a!=b);//In these case both conditions are true.
// cout<<"\nThe value of : "<<(a>=b)||(a==b);//In these case minimum one condition are true the print 1 another 0are true.
// cout<<"\nThe value of : "<<!(a>=b)&&(a!=b);//In these case invert the ans. 



//     return 0;
// }
