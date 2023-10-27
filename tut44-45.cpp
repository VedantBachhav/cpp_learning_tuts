//       **** This is tutorial number 44 & 45 ****

//      **** Virtual base Class in cpp ****

#include <iostream>
using namespace std;

/*
Inheritances : 

Student ----> Test  *[Done]
Student ----> Sports *[Done]
Test ----> Result *[Done]
Sports ----> Result *[Done]
*/

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is : " << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here : " << endl
             << "maths marks : " << maths << endl
             << "physics marks : " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your P.T. score is  : " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is : " << total <<"/200"<< endl;
    }
};

int main()
{
result vedant;
vedant.set_number(4200);
vedant.set_marks(78.93,99.5);
vedant.set_score(10);
vedant.display();

    return 0;
}
