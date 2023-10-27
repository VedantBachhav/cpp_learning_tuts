//     **** This is tutorial number 60 ****

//  ****  Files i/o in c++ : Reading and Writing Files  ****


#include<iostream>
#include<fstream>

/*
The useful classes for working with files in c++ are :

1. fstreambase
2. ifstream  -----> derived from fstreambase
3. ofstream  -----> derived from fstreambase
*/


/*  In order work with files in c++, you will have to open it. Primarilly, there are 2 ways to open a file.

1. Using the constrouctor
2. Using the member function open() of the class
*/

using namespace std;

int main()
{
    // Opening files using constructor and writing it.
    // string st = "Harry Bhai";
    // ofstream out("sample60.txt");  //--> write operation
    // out<<st;


    // Opening files using constructor and reading it.
    string st2;
    ifstream in("sample60b.txt");  //---> read operation
//  in>>st2;
    getline(in,st2);
//  getline(in,st2);
      cout<<st2;
    
    return 0;
}
