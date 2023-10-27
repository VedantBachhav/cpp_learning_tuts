/* ******C++ control structure , If Else and Switch-Case statement*****

T         *****This is a tuturial 9.*****

/*There  are three basic types of control structure.
1) Sequence structure : Program campil by sequnce(stape-by-stape).
entry - action1 - action 2 - action 3 - exit

2) Selection structure : entry -  condition - (true)a1 and (false)a2 - exit

3) Loop structure : entry - checking condition - (true = entry)- false - exit
 "<"" less than : ">"greater than
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout<<"Tell me your age : "<<endl;
    cin>>age;
    //**Control Selection structure :(if else) statement**
    /*if((age<18) && (age>0))//*"&&" logical and operator//
    {
        cout<<"You can't come to the party"<<endl;
    }
    else if ( age==18)
       cout<<"You are a kid and you will get kid pass to the party"<<endl;
    }
    else if (age<1)
    {
        cout<<"You are not yet born"<<endl;
    }
    else
    {
        cout<<"You can come to the party"<<endl;
    }*/



    //****Control Selection structure :(switch case) statement ****
    switch (age)
    {
    case 18:
    cout<<"Your age is 18"<<endl;
        break;

    case 22:
     cout<<"Your age is 22"<<endl;
       break;

       case 16:
        cout<<"Your age is 16"<<endl;
        break;

        case 45:
         cout<<"Your age is 45"<<endl;
         break;

    default:
     cout<<"No special cases"<<endl;
        break;
    }
    // cout<<"Done with switch case"<<endl;
    return 0;
}

