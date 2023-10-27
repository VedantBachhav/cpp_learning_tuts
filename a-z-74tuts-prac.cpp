#include<iostream>
using namespace std;
class base{
    public:
    void disply(){
        cout<<"base class "<<endl;

    }
};
class base2{
    public:
    void display(){
        cout<<"base class 1"<<endl;
    }
};
class derived:public base,public base2{
    public:
    void c(){
       base2::display();
        // cout<<"derived class";
    }
};
int main()
{
    derived d;
    d.c();
    return 0;
}
// #include<iostream>
// using namespace std;
// class multip{
//     public:
//     int a,b;
//    void  setdata(int n1,int n2){
//        a=n1;
//        b=n2;
//     }
//     multip putdata(multip o2,multip o3);
//     void printn(){
//         cout<<a<<b<<endl;
//     }
// };
// multip putdata(multip o2,multip o3){
// // int c;
// // c=o2+o3;
// multip c;
// c.setdata((o2.a+o3.a),(o2.b,o3.a));
// return c;
// }
// int main()
// {
//     multip m,n,o;
//     m.setdata(12,34);
//     n.setdata(2,3);

//     m.printn();
//     n.printn();

//     o.putdata(m,n);
//     o.printn();
//     return 0;
// }

// incomplete
// enum and union struct
// strting all incomplete
//  tut 22 incomplete work in file

// single inheritance program failed example in vs code but run in dev c++
// #include<iostream>
// #include<string>
// using namespace std;

// class base{
//    int a;
//     protected:
//     int id;
//     string name;
//     public:
//     int salary();
// };
// int base::salary(){
// 	a=67000;
// 	return a;
// }

// class derived: public base{
// public:
// void putdata(){
//     cout<<"Enter student id "<<endl;
//     cin>>id;
//     cout<<"Enter student name "<<endl;
//     cin>>name;

// }
// void display(){
// 	cout<<"\nStudent id :  "<<id<<endl;
// 	cout<<"Student name :  "<<name<<endl;
// 	cout<<"Salary is :  "<<salary();
// }
// };

// int main()
// {

//     derived d;

//     d.putdata();
//     d.display();

//     return 0;
// }

// #include<iostream>
// #include<list>
// using namespace std;
// void display(list<int> &itl){
//     int i;
//    list<int>:: iterator it;
//     for ( it=itl.begin();it!=itl.end(); it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     list<int> list1;
//     list1.push_back(20);
//     list1.push_back(45);
//     list1.push_back(75);
//     list1.push_back(95);
//     list1.push_back(245);
//     list1.push_back(4785);
//     list1.push_back(485);
//     // display(list1);
//     // list1.pop_back();
//     // // list1.pop_back();
//     // display(list1);
//     // list1.pop_front();
//     // display(list1);
//     // list1.remove(75);
//     list1.sort();
//     display(list1);

//     list<int> list2(4);
//     list<int>:: iterator iter;
//     iter = list2.begin();
//     *iter = 98;
//     iter++;
//     *iter = 398;
//     iter++;
//     *iter = 298;
//     iter++;
//     *iter = 198;
//     iter++;
//     list2.sort();
//     list2.remove(198);
//     display(list2);
//     list1.merge(list2);

//     display(list1);

//     return 0;
// }
