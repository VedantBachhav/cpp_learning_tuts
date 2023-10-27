//   **** This is tutorial number 64 ****
// study hard
//   **& writing out first c++ Template in vs code &**

#include <iostream>
using namespace std;

template<class T>
class vector
{

public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
     T sum(vector &v)
    {
        int i;
        T d = 0;
        for (i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
            return d;
    }
};

int main()
{
    vector <float> v1(3);
    v1.arr[0] = 5.6;
    v1.arr[1] = 15;
    v1.arr[2] = 25.7;
    vector <float> v2(3);
    v2.arr[0] = 2.90;
    v2.arr[1] = 1;
    v2.arr[2] = 0;

   float a = v1.sum(v2);
   cout<<a<<endl;

    return 0;
}