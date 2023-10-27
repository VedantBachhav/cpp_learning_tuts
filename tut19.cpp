//         *****This is tutorial 19 *****
//       ****Function Overloading with examples in c++  ****

#include<iostream>
using namespace std;


int sum(int a, int b)
{
    cout<<"Using function with 2 arguments : "<<endl;
    return a+b;
}
double sum(double a, double b){
    cout<<"using double create 2 argument function"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"Using function with 3 arguments : "<<endl;
    return a+b+c;
}

//Calculate the volume of a cylinder.
float volume(double r, int h, float a = 3.14)
{
    // a means vaue of pi
    return(a*r*r*h);
}

//Calculate the volume of a cube.
int volume(int a)
{
    return(a*a*a);
}

//Calculate the volume of a rectangular box.
int volume(int l, int b, int h)
{
    return(l*b*h);
}

int main()
{
    cout<<"sum is : "<<sum(10.9,20.9)<<endl;//----using double z(float not work)crete 2 argument function
    cout<<"The sum of 10 and 20 is "<<sum(10,20)<<endl;
    cout<<"The sum of 30, 10 and 20 is "<<sum(10,20,30)<<endl;


    cout<<"The volume of cuboid is "<<volume(3,7,6)<<endl;
  
    cout<<"The volume of cube is "<<volume(7)<<endl;
    cout<<"The volume of cylinder is "<<volume(3,6)<<endl;
    
    return 0;
}