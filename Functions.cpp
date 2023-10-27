//                *****This is tutorial 15*****

//Functions and function prototypes 

// 1) Function
#include<iostream>
using namespace std;

// int sum(int a, int b)
// {
// int c =a+b;
//     return c;
// }
// int main(int argc, char const *argv[])
// {
//     int num1, num2;
//     cout<<"Enter the first number"<<endl;
//     cin>>num1;
//     cout<<"Enter the second number"<<endl;
//     cin>>num2;
//     cout<<"sum is : "<<sum(num1,num2)<<endl;

// return 0;
// }



    // 2) function prototype

    //type function-name (arguments)

// int sum(int a, int b); //------> Acceptable
// int sum(int a, int b);  //------> Not// Acceptable
int sum(int , int );   //------> Acceptable

void g();    //------> Acceptable
void g(void);    //------> Acceptable

int main()
{
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters. 
    cout<<"sum is : "<<sum(num1,num2)<<endl;
    g();
    return 0;
}


 int sum(int a, int b)
 //Formal Parameters a and b will be taking values from actual parameters num1 and num2.
 {
 int c =a+b;
     return c;
 }

     void g()
     {
         cout<<"\nHellow good morning";
 
 }

 




// example
//  #include<iostream>
// using namespace std;

// float multi(float,float);
// void ved();
// int main()
// {
//     int x=5, y = 6;
//     cout<<"multiflication is : "<<multi(x,y);
//     ved();
//     return 0;
// }
// float multi(float a,float b){
//     int c;
//     c=a*b;
//     return c;
// }
// void ved(void ){
//     cout<<"\nMy name is vedant";
// }

