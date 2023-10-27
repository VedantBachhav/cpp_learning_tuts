#include <iostream>
#include <cmath>

using namespace std;   
class basicshape
{
public:
    float a, b, c, d, pi = 3.14, r;
    void rectangle(void)
    {
        cout << "Enter length of rectangle : \t";
        cin >> a;
        cout << "\nEnter width of rectangle : \t";
        cin >> b;
        cout << "\nEnter height of rectangle : \t";
        cin >> c;
        int choice;
        cout << "\nWhat will find you?" << endl;
        cout << "1.Area" << endl;
        cout << "2.Perimeter" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            d = a * b ;
            cout << "Area of rectangle is : \t" << d;
            break;
        case 2:
            d = 2 * (a + b);
            cout << "Perimeter of rectangle is : \t" << d;
            break;

        default:
            cout << "You entered worong choice";
            break;
        }
    }

    void square(void)
    {
        cout << "Enter side of square : \t";
        cin >> a;

        int choice;
        cout << "\nWhat will find you?" << endl;
        cout << "1.Area" << endl;
        cout << "2.Perimeter" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            b = a * a;
            cout << "Area of square is : \t" << b;

            break;
        case 2:
            b = a * a * a * a;
            cout << "Perimeter of square is : \t" << b;

            break;

        default:
            cout << "You entered worong choice" << endl;

            break;
        }
    }

    void circle(void)
    {
        cout << "Enter radius of a circle : \t" << endl;
        cin >> r;
        d = 2 * r;

        int choice;
        cout << "\nWhat will find you?" << endl;
        cout << "1.Area" << endl;
        cout << "2.Perimeter" << endl;
        cout << "3.Circumference" << endl;
        cout << "4.Diameter" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            a = pi * r * r;
            cout << "Area of circle is : \t" << a;

            break;
        case 2:
            a = pi * d;

            cout << "Perimeter of circle is : \t" << a;

            break;
        case 3:
            a = 2 * pi * r;
            cout << "Circumference of a circle is : \t" << a;
            break;
        case 4:
            cout << "Diameter of a circle is : \t" << d;
            break;

        default:
            cout << "You entered worong choice" << endl;

            break;
        }
    }
};

class solidshape
{
public:
    float a, b, c, r, d, pi = 3.14;

    void cube(void)
    {
        cout << "Enter side of a cube : \t" << endl;
        cin >> a;

        int choice;
        cout << "\nWhat will find you?" << endl;
        cout << "1.Total surface Area" << endl;
        cout << "2.Volume" << endl;
        cout << "3.Lateral surface area of a cube" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            d = 6 * a * a;
            cout << "Total surface area of cube : \t" << d;

            break;
        case 2:
            d = a * a * a;

            cout << "Volume of a cube is : \t" << d;

            break;
        case 3:
            d = 4 * a * a;
            cout << "Lateral surface area of a cube is : \t" << d;
            break;

        default:
            cout << "You entered worong choice" << endl
                 << "Please try again";

            break;
        }
    }
    void cuboid(void)
    {
        cout << "Enter length of cuboid : \t";
        cin >> a;
        cout << "\nEnter width of cuboid : \t";
        cin >> b;
        cout << "\nEnter height of cuboid : \t";
        cin >> c;

        int choice;
        cout << "\nWhat will find you ?" << endl;
        cout << "1.Total surface Area" << endl;
        cout << "2.Volume" << endl;
        cout << "3.Lateral surface area " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            d = 2 * (a * b + b * c + a * c);
            cout << "Total surface area of cuboid : \t" << d;

            break;
        case 2:
            d = a * b * c;
            cout << "Volume of a cuboid is : \t" << d;

            break;
        case 3:
            d = 2 * c * (a + b);
            cout << "Lateral surface area of a cuboid is : \t" << d;
            break;

        default:
            cout << "You entered worong choice" << endl;

            break;
        }
    }
    void cylender(void)
    {
        cout << "Enter radius of cyleder : \t";
        cin >> r;
        cout << "\nEnter height of cyleder : \t";
        cin >> b;

        int choice;
        cout << "\nWhat will find you?" << endl;
        cout << "1.Total surface Area" << endl;
        cout << "2.Volume" << endl;
        cout << "3.Curved surface area " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            d = 2 * pi * r * (b + r);
            cout << "Total surface area of cuboid : \t" << d;

            break;     
        case 2:
            d = pi * r * r * b;
            cout << "Volume of a cylender is : \t" << d;

            break;
        case 3:
            d = 2 * pi * r * b;
            cout << "Curved surface area of a cylender is : \t" << d;
            break;

        default:
            cout << "You entered worong choice" << endl;

            break;
        }
    }
};

int main()
{
    basicshape shape1, shape2, shape3;
    solidshape shape4, shape5, shape6;
    int shapes;
    cout << "\nChoose shape which one do you want?" << endl;
    cout << "1.Rectangle" << endl;
    cout << "2.Square" << endl;
    cout << "3.Circle" << endl;
    cout << "4.Cube" << endl;
    cout << "5.Cuboid" << endl;
    cout << "6.Cylender" << endl;
    cin >> shapes;
    switch (shapes)
    {
    case 1:
        shape1.rectangle();
        break;
    case 2:
        shape2.square();
        break;
    case 3:
        shape3.circle();
        break;
    case 4:
        shape4.cube();
        break;
    case 5:
        shape5.cuboid();
        break;
    case 6:
        shape6.cylender();
        break;
    default:
        cout << "You  select wrong choice" << endl
             << "please try again"; 
        break;
    }

    return 0;
}