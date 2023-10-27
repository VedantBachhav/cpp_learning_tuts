//  *****This is a tuturial 7.*****

//c++ Referance Variables and Typecasting

#include<iostream>

using namespace std;

//int c = 65; 
int main(int argc, char const *argv[])
{
    //************ bulid for data types*************
    /*int a, b, c;

    cout<<"Enter the value of A : ";
    cin>>a;

    cout<<"\nEnter the vaue of B : "; 
    cin>>b;

    c = a+b;
    cout<<"\nSum of both values is : "<<c;
    cout<<"\nThe global C is "<<::c;
   // "::" its symbol is known as scope resolvation operator.*/ 






//************float, double, long double litteral types*************
  
   // float d= 34.4f;
   // long double  e= 34.4l;

   // cout<<"The value of 34.4 is : "<<sizeof(34.4);//this value print in double
   // cout<<"\nThe value of 34.4 is : "<<sizeof(34.4f);
   // cout<<"\nThe value of 34.4 is : "<<sizeof(34.4F);
   // cout<<"\nThe value of 34.4 is : "<<sizeof(34.4l);
   // cout<<"\nThe value of 34.4 is : "<<sizeof(34.4L);
   



   
   
   
//************Referance variables***************
// vedant------->sani------->ved------->vedu
//We used one variable if we have point with other variable then we used referance vaiable
    
//  float x = 555;
//  float & y = x;
//  cout<<x<<endl;
//  cout<<y<<endl;


 //************type casting***************
 //The meaning of type casting is one deta type is convert into another data type.
 //for ex. float convert into int
 
 int a = 45;
 float b = 45.99;
 cout <<"The value of A is "<<float(a)<<endl;
 cout<<"The value of B is "<<(int)b<<endl;

 cout<<"The expression is "<<a+b<<endl;  
 cout<<"The expression is "<<a+(int)b<<endl;
 cout<<"The expression is "<<a+int(b)<<endl;
 
 

    return 0;
}
