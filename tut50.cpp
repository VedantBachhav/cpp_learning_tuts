//     **** This is tutorial number 50  ****

//     **** Revisiting Pointers : New and Delete Keywords in cpp / with exampales ****

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    //  Basic Example of pointer
    cout << "This is a exampales of Basic Example of pointer " << endl;

    int a = 4;
    int *ptr = &a;
    cout << "This is the address of oprator : " << &a << endl;
    cout << "This is the address of oprator : " << ptr << endl;
    cout << "This is the address of oprator : " << *ptr << endl;
    cout << "This is the address of oprator : " << *(ptr) << endl;

    //  New keyword
    cout << "This is a exampales of new keyword" << endl;

    // int *p = new int(40);
    float *p = new float(89.253);
    cout << "The value at address p is : " << *p << endl;

// New array pointers
     cout << "This is a exampales of  New array pointers" << endl;

    int *arr = new int [3];
    arr[0] = 100;
    *(arr +1)= 200;// both methods outputs are same
    arr[2] = 300;
    
//    delete []arr;

    cout<<"The value of arr [0] is : "<<arr[0]<<endl;
    cout<<"The value of arr [1] is : "<<arr[1]<<endl;
    cout<<"The value of arr [2] is : "<<arr[2]<<endl;


    return 0;
}
