//        *****This is tutorial 35 *****
//     **/** Destructors in cpp **/**

#include <iostream>
using namespace std;

// Destructor never takes an argument nor does is return any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is a time when constructor is called for object number" << count << endl;
    }
    // destructor symbol is tilled '~'
    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}