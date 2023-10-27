//     **** This is tutorial number 67 ****

//        **&** C++ Functions Templates & Function Templates with Parameters **&**

#include<iostream>
using namespace std;

// float funcAverage (int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// template<class T1, class T2>
// float funcAverage1 (T1 a, T2 b){
//     float avg = (a+b)/2.0;
//     return avg;

template<class t2, class t>
void swapp(t &a, t2 &b){
    t temp =a ;
    a = b;
    b = temp;
    
}
int main()
{
    // float a;
    //  a = funcAverage (3,4.3);
    //  printf("The average of these  numbers is : %.2f ",a);
    
   float  x = 34;
    float y = 55.676;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}