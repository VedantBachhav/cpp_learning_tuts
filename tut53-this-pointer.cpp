//            ****This is tutorial number 53 ****

//                *** This pointers in cpp ***

#include<iostream>
using namespace std;

class A {
    int a;
    public:
    // void setdata(int a){
    //   this->a = a;
    // }

   A & setdata(int a){
      this->a = a;
      return *this;
    }

    void getdata(){
        cout<<"The value of a is : "<<a<<endl;

    }
};

// "this" is a keyword which is a pointer which points to the object which invokes the member function.

int main(){
A a;
// a.setdata(420);
// a.getdata();	
a.setdata(100000).getdata();
	return 0;
}