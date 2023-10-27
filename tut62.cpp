//              **** This is tutorial number 62 ****

//        &&& --  File I/O in c++ : open() and eof() function in cpp -- &&&

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "this-is-my-brother\n";
    out << "this-is-my-brother_ABHIJIT_PATIL\n";
    out << "this is my brother\n";
    out << "this is my brother\n";
    out << "this is my brother\n";
    out << "this is my brother";
    out.close();

// for using specific word/ string
    // ifstream in;
    // string st, st2;
    // in.open("sample60.txt");
    // in >> st >> st2;
    // cout << st << endl
    //      << st2;
    // in.close();

//  Using while loop for reading combine string/ lines
    ifstream in;
    string st, st2;
    in.open("sample60.txt");
//    while eof stands for ---> end of while

    while(in.eof()==0 ){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}







/*
// create by me for practice
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream ved;
    ved.open("sample60b.txt");
    ved<<"my_name-is-vedant_devidas_bachhav\n";
    ved<<"my_name-is-vedant_devidas_bachhav\n";
    ved<<"my name is vedant devidas bachhav\n";
    ved<<"my name is vedant devidas bachhav\n";
    ved<<"my name is vedant devidas bachhav\n";
    ved.close();


    ifstream das;
    string devi,bac,abhi;
    das.open("sample60b.txt");
    // das>>devi>>bac>>abhi;
    // cout<<devi<<endl<<bac<<endl<<abhi;
    while (das.eof()==0)
    {
        getline(das,devi);
        cout<<devi<<endl;
    }
    
    
    das.close();
    return 0;
}*/