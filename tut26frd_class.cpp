//      *****This is tutorial no 26 *****

//    ++** Friend function examples ++**


//Example no. 1


/*#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
    void setValue(int value){
        cout<<"enter first value"<<endl;
        cin>>value;
        data = value;
    }
    friend void add (X,Y);
};

class Y {
    int num;
    public:
    void setValue(int value){
        cout<<"enter second value"<<endl;
        cin>>value;
        num = value;
    }
    friend void add (X,Y);
};


void add ( X o1 ,Y o2){
    cout << "Summing datas of X and Y objects gives me "<<o1.data + o2.num;
}

int main()
{
    X a; 
    a.setValue(01);
    
  
    Y b;
    b.setValue(4);
   
    add (a, b);
    return 0;
}*/






//Example no. 2
#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void exchange(c1 & , c2 &);
    public:
    void indata(int a){
        val1 = a;
    }

        void display(void){
            int sum;
            cout<<val1<<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 & , c2 &);
    public:
    void indata(int a){
        val2 = a;
    }

        void display(void){
            cout<<val2<<endl;
        }
};

/*
Trick to swap 2 numbers a and b : 
Temp = a;
a = b;
b = Temp;
*/

void exchange(c1 & x, c2 &y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(89);
    oc2.indata(11);
    exchange(oc1,oc2);
    cout<<"The value of c1 after exchaniging becomes : ";
    oc1.display();
    cout<<"The value of c2 after exchaniging becomes : ";
    oc2.display();

    return 0;
}