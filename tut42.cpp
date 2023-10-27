//    ***  This is tutorial no 43  ***

// *** Exercise on c++ Inheritance ***

/*
Create 2 classes :
   1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.

   2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice.
   
      create another class Hybridcalculaltor and inherit it using these 2 classes.
   */

#include <iostream>
#include <cmath>
using namespace std;

class simpalcalculator
{
   int a, b;

public:
   void getdata()
   {
      cout << "Enter first number : " << endl;
      cin >> a;

      cout << "Enter second number : " << endl;
      cin >> b;
   }
   void performOperations()
   {
      cout << "addition of both numbers is : " << a + b << endl;
      cout << "subtraction of both numbers is : " << a - b << endl;
      cout << "Multification of both numbers is : " << a * b << endl;
      cout << "dividation of both numbers is : " << a / b << endl;
      cout << "Remainder dividation of both numbers is : " << a % b << endl;
   }
};
class scientificcalculator
{
   int a, b;

public:
   void getdatascientific()
   {
      cout << "Enter first number : " << endl;
      cin >> a;

      // cout << "Enter second number : " << endl;
      // cin >> b;
   }
   void performOperationsscientific()
   {
      cout << "The value of cos(a) is : " << cos(a) << endl;
      cout << "The value of tan(a) is : " << tan(a) << endl;
      cout << "The value of sin(a) is : " << sin(a) << endl;
      cout << "The value of exp(a) is : " << exp(a) << endl;
   }
};

class hybridcalculator : public simpalcalculator, public scientificcalculator
{

};
int main()
{

   // simpalcalculator d2;
   // scientificcalculator d2;
   // d2.getdata();
   // d2.performOperations();
hybridcalculator calculator;
// calculator.getdatascientific();
// calculator.performOperationsscientific();
calculator.getdata();
calculator.performOperations();
   return 0;
}