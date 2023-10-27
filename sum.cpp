#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,sum,mul,sub,div;

    cout <<"Enter the value of num1 : \t";
    cin>> a;

    cout <<"Enter the value of num2 : \t";
    cin>> b;

    sum= a+b;
    cout<<"\n Sum of both numbers is "<<sum;
    
    sub= a-b;
    cout<<"\n Subtraction of both numbers is  "<<sub;
    
    mul= a*b;
    cout<<"\n Multification of both numbers is  "<<mul;
    
    div= a/b; 
    cout<<"\n Division of both numbers is  "<<div;
    
    return 0;
}
