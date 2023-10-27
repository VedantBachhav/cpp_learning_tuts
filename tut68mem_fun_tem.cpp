//     **** This is tutorial number 68 ****

//    **^** Member Function Templates and Overloading Template Fuctions in c++ **^**

#include <iostream>
using namespace std;

template <class T>
class Vedant
{
public:
    T data;
    Vedant(T a)
    {
        data = a;
    }
    void display();
    void display1();
};
template <class T>
void Vedant<T>::display()
{
    cout << "This is data value " << data << endl;
}

void func(int a)
{
    cout << "I am a func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am a templatised func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am a templatised func() " << a << endl;
}
int main()
{
    // Vedant <char> v('D');

    // v.display();
    // cout<<v.data;
    // func(4); // Exact match takes time highest priority and /template require specific match
    func1(2.34);
    return 0;
}



// example 
/*
#include<iostream>
using namespace std;
template <class a=float,class b=float>
class vedant{
public:
    a num1;
    b num2;
    float c;
    // vedant(a x, b y){
    //     num1 = x;
    //     num2 = y;
    // }
    void display(void){
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    }
   void addition(void){
        c= num1 + num2;
        cout<<"addition of both numbers is  : "<<c<<endl;
    }
    
};

int main()
{
  vedant <> de;

    de.display();
    de.addition();
    return 0;
}*/