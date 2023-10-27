#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Collecting our file with hout(using any name like as vedanto) stream
    ofstream hout("sample60.txt");

    // Creating a name string and filling it with the string enter by the user
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name;

    // Writing a string to the file
    hout<<"My name is "+ name ;
    hout.close();

    ifstream vedant("sample60.txt");
    string patil;
    // vedant>>patil;
    getline(vedant,patil);
    cout<<"The content of this file is : "<<patil;
    // vedant.close();
  
    return 0;
}