//           **** This is tutorial number 51  ****

//       *** Pointers to Object and Arrow operator in cpp ***

#include<iostream>
using namespace std;
class complex{
int real, imaginary;
public:
 void getdata(){
     cout<<"Real part is : "<<real<<endl;
     cout<<"Imaginart part is : "<<imaginary<<endl;

 }
 void setdata(int a,int b){
     real = a;
     imaginary = b;
 }
};
int main()
{
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;  //both are display same output
    // (*ptr).setdata(1000,2000); is exactly same as 
    ptr->setdata(56,44);
    // (*ptr).getdata(); is good as 
    ptr->getdata(); 

    //   "->" is called arrow operators 

    //  Array of object 
    complex *ptr1 = new complex[4];  
    ptr1->setdata(1,4);
    
    ptr1->getdata(); 
    return 0;
}