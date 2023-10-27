// Using for loop and class array and making table

#include <iostream>
using namespace std;

class table
{
public:
  int a, b, c, t;
    void process(void)
    {
        cout << "Enter number for creating table." << endl;
        cin >> c;
        {
            for (a = 1; a <= 10; a++)
            {
                for (b = 0; b <= c; b++)
                {
                    t = a * b;
                }

                cout << "\n"<< a << ")\t" << t;
            }
            cout << "\n"<< endl;
        }
    }
};

int main()
{
    table tab[100];
    int i;
    for (i = 1; i <=100; i++)
    {
        tab[i].process();
    }

    return 0;
}