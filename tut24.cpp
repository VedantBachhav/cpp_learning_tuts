// //           ****This is tutorial 24****

// //      ***  Static Data Members &Methods in c++    ***

// #include <iostream>
// using namespace std;

// class Employee
// {
    
//     int id;
//     static int count;

// public:
//     void setData(void)
//     {
//         cout << "Enter the id" << endl;
//         cin >> id;
//         count+1000;
//     }
//     void getData(void)
//     {
//         cout << " This id of this employee " << id << "\n and this is employee number :  " << count << endl;
//     }

//     static void getCount(void)
//     {
//         cout << "The value of count is " << count << endl;
//     }
// };
// //cout is the static data member of class employee

// int Employee::count; //Default value is 1000 as your choice;

// int main()
// {
//     Employee harry, manish, vedant,abhijit;
//     // harry.id = 1;
//     //harry.cout=1; // cannot do ths as id and cout are private

//     harry.setData();
//     harry.getData();
//     Employee::getCount();

//     manish.setData();
//     manish.getData();
//     Employee::getCount();

//     vedant.setData();
//     vedant.getData();
//     Employee::getCount();

//     abhijit.setData();
//     abhijit.getData();
//     Employee::getCount();
//     return 0;
// }









// how to increase static by 1000 ?---not find
// example
#include<iostream>
#include<string>
using namespace std;
class worker{
    public:
    static int id;
    string wname;
    
       int salary;

    void getdata(){
        id++;
        cout<<"Enter name  of worker : "<<endl;
        cin>>wname;
        cout<<"Enter salary of worker : "<<endl;
        cin>>salary;

    }
    void display(){
    cout<<"\nWorker id is : "<<id<<endl;
    cout<<"Worker name is : "<<wname<<endl;
    cout<<"Worker salary is : "<<salary<<" Rs"<<endl;
    cout<<endl;
    }
};
int worker::id;//=1000;
int main()
{
    worker work[20];
   
    for (int i = 0; i < 7; i++)
    {
   
        work[i].getdata();
        work[i].display();
    }
        
    return 0;
}