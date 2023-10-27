//    **+** This is tutorial number 38 **+**

//   **** Single Inheritance Deep Dive : Examples + code  ****

// #include <iostream>
// using namespace std;

// class Base
// {
//     int data1;

// public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };

// void Base ::setdata(void)
// {
//     data1 = 10;
//     data2 = 20;
// }

// int Base::getdata1()
// {
//     return data1;
// }

// int Base::getdata2()
// {
//     return data2;
// }

// class derived : public Base
// { // Class is being derived publically
//     int data3;

// public:
//     void process();
//     void display();
// };

// void derived::process()
// {
//     data3 = data2 * getdata1();
// }

// void derived::display()
// {
//     cout << "Value of data 1 is " << getdata1() << endl;
//     cout << "Value of data 2 is " << data2 << endl;
//     cout << "Value of data 3 is " << data3 << endl;
// }

// int main()
// {
//     derived der;
//     der.setdata();
//     der.process();
//     der.display();

//     return 0;
// }

//    **+** This is tutorial number 38 **+**

//   **** Single Inheritance Deep Dive : Examples + code  ****
// using example of private function. for making private function all base class constructor is making privately then we will adding this construction in inheritance private class for ex. we see setdata()

#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getdata1()
{
    return data1;
}

int Base::getdata2()
{
    return data2;
}

class derived : private Base
{
    // Class is being derived Privately
    int data3;

public:
    void process();
    void display();
};

void derived::process()
{
    setdata();
    data3 = data2 * getdata1();
}

void derived::display()
{
    cout << "Value of data 1 is " << getdata1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    derived der;
    // der.setdata();
    der.process();
    der.display();

    return 0;
}   