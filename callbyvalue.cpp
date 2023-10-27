//         *****This is tutorial 16*****
//difficult
//   ***Call by value and call by Reference in c++  ***


#include<iostream>
using namespace std;

// call by reference using pointer
/*void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}*/

// call by reference using c++ refernce variables

void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{    
    int x = 4, y = 6;
    //cout<<"The value of x is "<<x<<"the value of y is "<<y<<endl;
  //swapPointer(&x, &y);  //This will not swap a and b using pointer reference.

    swapReferenceVar(x, y);  //This will not swap a and b using reference variable.
    cout<<" The value of x is "<<x<<" The value of y is "<<y<<endl;       
    return 0;
}