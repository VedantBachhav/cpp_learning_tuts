
//        *****This is tutorial 32 *****

//     **/** Constructors with default arguments //*//

#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};

void simple::printdata()
{
    cout << "The value of data1 and data2 is " << data1 << "  and  " << data2 <<"."<< endl;
  
    
}

int main()
{
    simple s(1, 5), s2(25002,250082);
    simple s1(4, 8), s3(78,900);
    s.printdata(); 
    s1.printdata();
    s2.printdata();
    s3.printdata();
    return 0;
}

