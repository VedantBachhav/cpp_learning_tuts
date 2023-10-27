//     **** This is tutorial number 74 ****
// refrence ---> cpp refrence fuction object web
//    **** Function Objects (Functors) In C++ STL ****

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    // Function Objects also know as (Functor): Function wrapped in a class so that it available like an objects

    int arr[] = {1,43,44,412,54,77};
    // sort(arr,arr+5);
    sort(arr,arr+6,greater<int>{});
    for (int i = 0; i <6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}