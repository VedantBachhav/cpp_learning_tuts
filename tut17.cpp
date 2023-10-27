//        *****This is tutorial 17*****

//      ***Iinline function, Default Arguments and Constant Argunments***

#include<iostream>
using namespace std;

//This is a Iinline function
 inline int product( int a , int b)
{
    //static function /not recommended to below lines using inline function
    static int c=1;  // This exicute only once.
    c = c + 1;  //Next time this function is run, the value of c will be retained
    return a*b+c;
    //  return a*b;
}
//This is a diffault arguments //"float factor = 1.04"its a diffault argument (never diffault arrguments write to right side)

 float moneyrecived ( int currentmoney , float factor = 1.4)
{
    return currentmoney * factor;
}
/*int strelen(const char *p)
{

}*/

int main()
{ 
 int money = 200000;
   
    int a, b;
    cout <<"Enter the value of num1 : \t"<<endl;
    cin>> a;

    cout <<"Enter the value of num2 : \t"<<endl;
    cin>> b;

    cout<<"The product of both number is :"<<product(a ,b)<<endl;


 
  
    // cout<<"If you have "<<money<<"Rs in your bank accout, you will recive "<<moneyrecived(money)<<"Rs after one year"<<endl;
    // cout<<"If you have "<<money<<"Rs in your bank accout, you will recive "<<moneyrecived(money , 1.12)<<"Rs after one year"<<endl;
    // cout<<"If you have "<<money<<"Rs in your bank accout, you will recive "<<moneyrecived(money , 1.24)<<"Rs after one year"<<endl;
    return 0;
}
