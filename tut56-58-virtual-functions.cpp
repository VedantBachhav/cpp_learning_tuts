//           **** This is tutorial number 56 ****
//      ***?*** Virtual Functions on c++ (((?)))

//           **** This is tutorial number 57  ---> Examples & Rules****

//                **** This is tutorial number 58 ****

//       **** Abstract Base Class & Pure Virtual Functions in c++ ****



/*Rules for virtual functions

1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friends of another class.
4. A virtual function in base class might not be used.
5. A virtual function defined in the base class, there ia no necesity of redifining it in the derived class.
*/ 


//      ***?*** Virtual Functions on c++ (((?)))
/*
#include<iostream>
using namespace std;

class Baseclass{
    public:
    int var_base=1;
    virtual void display(){
        cout <<"1 Displaying Base class variable var_base "<<var_base<<endl;
    }
};

class Derivedclass : public Baseclass{
    public:
    int var_derived=2;
    void display(){
          cout <<"2 Displaying Base class variable var_base "<<var_base<<endl;
          cout <<"2 Displaying Derived class variable var_derived "<<var_derived<<endl;

    }
};
int main()
{
   Baseclass *base_class_pointer;
   Baseclass obj_base;
   Derivedclass obj_derived;

   base_class_pointer = &obj_derived;
   base_class_pointer->display();


    return 0;
}*/

// Examples on virtual functions e.g. no. 1

/*
#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }

    void display()
    {
        cout << "\nThis is an amazing video with title " << title << endl;
        cout << "Rating of this video : " << rating << " Out of 5 stars." << endl;
        cout << "Length of this video : " << videolength << " minutes." << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "\n\nThis is an amazing TEXT Tutorial with title " << title << endl;
        cout << "Rating of this TEXT Tutorial : " << rating << " Out of 5 stars" << endl;
        cout << "NO. of words in this TEXT Tutorial : " << words << " words." << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;


    // for CWH video
    // title = "Hanuman Chalisa";
    // rating = 4.32;
    // vlen = 4.90;


    // my changes
    cout<<"Enter title of the video"<<endl;
    cin>>title;
    cout<<"Enter rating of this video"<<endl;
    cin>>rating;
    cout<<"Enter video length of this video"<<endl;
    cin>>vlen;
    CWHVideo Godsvideo(title, rating, vlen);
    // Godsvideo.display(); ---->we run directly 



    // for CWH Text
    // title = "Hanuman Chalisa";
    // rating = 4.2;
    // words = 990;


    // my changes
    cout<<"\nEnter title of the Text Tutorial"<<endl;
    cin>>title;
    cout<<"Enter rating of this Text Tutorial"<<endl;
    cin>>rating;
    cout<<"How many words in this Text Tutorial"<<endl;
    cin>>words;
    CWHText Godstext(title, rating, words);
    // Godstext.display(); //---->we run directly 

// compiling using pointer
    CWH* tuts[2];
    tuts[0] = &Godsvideo;
    tuts[1] = &Godstext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}*/




//       **** Abstract Base Class & Pure Virtual Functions in c++ ****


// In this tutorial pure virtual function we  say to compiler creater proper function and excute program otherwise stop the program
// in abstract base class create / hota hai minimum one pure virtual function.

// synatax is  constructor like as  -------> virtual void display() {} =0

//  exampel on this tut


#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    // virtual void display(){cout<<"ved";} ----> not pure
    virtual void display()=0; //  ---> do-nothing function -->pure virtual function
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }

    void display()
    {
        cout << "\nThis is an amazing video with title " << title << endl;
        cout << "Rating of this video : " << rating << " Out of 5 stars." << endl;
        cout << "Length of this video : " << videolength << " minutes." << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    cout<<"Enter title of the video"<<endl;
    cin>>title;
    cout<<"Enter rating of this video"<<endl;
    cin>>rating;
    cout<<"Enter video length of this video"<<endl;
    cin>>vlen;
    CWHVideo Godsvideo(title, rating, vlen);
    Godsvideo.display();
    return 0;
}