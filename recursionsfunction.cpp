//          *****This is tutorial 18*****

//    ***Recurisons and Recursive Functions in cpp***


#include<iostream>
using namespace std;
//fibonacchi sequense
int fib(int n)
{
    if (n<2){
        return 1;
    }
    return fib (n-2) + fib (n-1);
}
int factorial(int n)
{
     if (n<=1){
    return 1;
    }
    return n * factorial(n-1);
}
int main()
{
    // Factorial of a number;
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by defination
    // 1! = 1 by defination
    // n! = n* (n-1)!
    int a;
    cout<<"Enter a number"<<endl;
    cin >>a;
    cout <<"Enter a factorial of  "<<a<<" is "<<fib(a)<<endl;
    // cout <<"The fibonachi   sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}