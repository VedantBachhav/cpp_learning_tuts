/*  ******Loops in c++*******

****This is a tuturial 10.

*There are three types of loops in c++:
1. for loop 
2. while loop 
3. do-while loop
*/



#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* 1.  For loop in c++.

     ++Syntax for "for loop".++
for( initialization; condition; updation)
{
    loop body (c++ code)
}*/

    //Example of infinatie for loop//
  /*  for (int i = 1; 34<=100; i++)
    {
         cout<<i<<endl;
    }*/


    // for (int i = 1; i<=100; i++)
    // {
    //     cout<<i<<endl;
    // }



    /***  2.  While loop in c++.****
       
       ----Syntax for "While loop".-----
       while (condition)
       {
           c++ ststement;
       }*/
       
       
       //Example of infinatie while loop//
    //    int i=1;
    //    while(i<=40)
    // {
    //      cout<<i<<endl;
    //      i++;
    // }
       
       
       //Printing 1 to 40 using while loop.
       int i=100;
    //    while (i<=40)
    //    {
    //        cout<<i<<endl;
    //        i++;
    //    }
       


/***  3.  do-while loop in c++.****
       
       ----Syntax for "do-while loop".-----
       do 
       {
           c++ ststement;
       }
       while(condition);
       */
      
    do
    {
      cout<<i<<endl;
      i++;
    } while (false);
    

    return 0;
}
