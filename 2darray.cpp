#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    int i, j, row, col;
    cout << "Enter row size" << endl;
    cin >> row;
    cout << "Enter coloumn size" << endl;
    cin >> col;
    cout << "Enter array elements" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "You entered given elements" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "\t" << a[i][j];
        }
        cout << "\n";
        
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[10][10];
//     int i, j, row, col;
//     cout << "Fnter row size : " << endl;
//     cin >> row;
//     cout << "Enter coloumn size : " << endl;
//     cin >> col;
//     cout << "Enter array elements : ";
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << "\nYou entered given elements : " << endl;
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//         {
//             cout << "\t" << a[i][j];
//         }
//         cout << "\n";
//     }
//     cout << "\nInverse matricelements : " << endl;
//     for (j = 1; j <= col; j++)
//     {
//         for (i = 1; i <= col; i++)
//         {
//             cout << "\t" << a[i][j];
//         }
//         cout << "\n";
//     }

//     return 0;
// }