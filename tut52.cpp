//      **** This is tutorial number 52 ****
//       This progrma compile in dev c++ not in vs code
//      *** Array of Objects Using Poingter in cpp ***

#include <iostream>
using namespace std;

class Shop
{

    int id;
    float price;

public:
    void setdata(int a, float b)
    {

        id = a;
        price = b;
    }

    void getdata(void)
    {

        cout << "Code of this item is : " << id << endl;
        cout << "Price of this item is : " << price << endl;
    }
};

int main()
{
    int size = 3;
    // for ex ---- int *ptr = new int [34]

    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, i, j;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1;
        cin >> p >> q;
        //   (*ptr).setdata(p,q);
        ptr->setdata(p, q);
        ptr++;
    }

    for (j = 0; j < size; j++)
    {
        cout << "Item number : " << j + 1 << endl;
        ptrTemp->getdata();
        ptrTemp++;
    }

    return 0;
}