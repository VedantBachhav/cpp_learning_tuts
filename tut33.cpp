//        *****This is tutorial 33 *****
//     **/** Dyanamic Initialization of Object Using Constructors in cpp **/**

#include <iostream>
using namespace std;

class Bankdeposit
{
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r); // r can be value like 0.04
    Bankdeposit(int p, int y, int r);   // r can be value like 14
    void show();
};

Bankdeposit::Bankdeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestrate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
Bankdeposit::Bankdeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void Bankdeposit::show()
{
    cout << endl
         << "Principle amount was " << principle << " Rs." << endl
        //  <<"Rate of interest is "<<interestrate<<"%."<<endl
         << "Return value after " << years << " years"
         << " is " << returnvalue << endl;
}
int main()
{

    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    // bd3.show();
    // given commented program run in only dec cpp
    //  cout << "Enter the value of p, y and r" << endl;
    //  cin >> p >> y >> r;
    //  bd1 = Bankdeposit(p, y, r);
    //  bd1.show();
    //--------------------//
    // cout << "Enter the value of p, y and r" << endl;
    // cin >> p >> y >> R;

    cout << "Enter the Principal value." << endl;
    cin >> p;
    cout << "Enter the number of years." << endl;
    cin >> y;
    cout << "Enter the rate of interest." << endl;
    cin >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();

    return 0;
}
