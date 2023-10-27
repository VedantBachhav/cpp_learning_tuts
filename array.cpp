                /****Arrays and Pointers Arithmetic in c++****
      
             ****This is a tuturial 12. ****

*An array is a collection of items of simillar type stored in contiguous memory location.
*Sometimes, a simple variable is not enough to hold all the data.
*For example,lets say we want to store the marks of students, having 2500 different variables for this
 task is not fesible.
*To solve this problem, we can define an array with size 2500 that can hold this marks of all students.
*Memory(calculate) are always start from '0' for ex : 0, 1, 2, 3,4, .....*/


#include<iostream>

using namespace std;

int main()
{
    //Array examples
    int marks[5] = {56, 67, 99,89 ,99};
    //mark is variable and adress also
    int mathmarks[4];
    mathmarks[0] = 567;
    mathmarks[1] = 678;
    mathmarks[2] = 567;
    mathmarks[3] = 345;

   //You can change the value of an array for ex:
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

  /*  cout<<"These are mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;*/

    //printing array with for loop
   for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // pointer and Arrays
    int*p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of *p is"<<*p<<endl;
    cout<<"The value of *(p+1) is"<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is"<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is"<<*(p+3)<<endl;
    cout<<"The value of *(p+4) is"<<*(p+4)<<endl;





//  address and pointers example self create
  //  int a = 4;
  //  int  *b = &a;
  //  int **c =&b;

   
  //  cout<<b<<endl;
  //  cout<<&a<<endl;
  //  cout<<&b<<endl;
  //  cout<<*b<<endl;
  //  cout<<c<<endl;
  //  cout<<*c<<endl;
  //  cout<<**c<<endl;



// one dimensional array
//       int i,b,house[50];
// cout<<"Enter array size"<<endl;
// cin>>b;

// cout<<"Enter array elements"<<endl;
// for ( i = 0; i <b; i++)
// {
//     cin>>house[i];
// }
// for ( i = 0; i <b; i++)
// {
//     cout<<"You enetered array element is "<<i<<" :\t"<<house[i]<<endl;
// }


    return 0;
}