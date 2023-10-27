//       ******Structure, Unions and Enums *******

// *******This is tutorial 14**********
//study hard on this topic

#include<iostream>
using namespace std;

//        ***STRUCTURE***

//typedef struct employee
struct employee
{
    int eid;
    char favchar;
    float salary;
};

    int main()
{
    struct employee harry;
    harry.eid = 11;
    harry.favchar = 'v';
    harry.salary = 12000000;
    cout<<"The values is "<<harry.eid<<endl;
   //cout<<"The values is "<<harry.favchar<<endl;
    cout<<"The values is "<<harry.salary<<endl;
    

    //      ***UNION*** 
   /* union money
    {
         int rice;
         char car;
         float pounds;
    };
    int main(int argc, char const *argv[])
    {
        
        union money m1;endl;
        m1.car='v';endl;
        //m1.rice=34;
        cout<<m1.car;*/


    //      ***ENNUM***

  /*  int main(int argc, char const *argv[])
    int main(int argc, char const *argv[])
    {
        enum Meal { breakfast, lunch, dinner, fastfood};
        Meal m1=dinner;
        cout<<m1<<endl;
        cout<<(m1==2);
        // cout<<breakfast<<endl;
        // cout<<lunch<<endl;
        // cout<<dinner<<endl;
        // cout<<fastfood<<endl;*/
        return 0;
    }
    
    

    

    