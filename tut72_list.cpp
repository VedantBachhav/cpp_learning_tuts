//      **** This is tutorial number 72 ****

//       **** List in  c++ STL ****

#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{ 
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1; // List of 0 Length.
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_back(52);

    display(list1);
    // Removing elements from the list
    // list1.pop_front();//deleting from front 
    // list1.pop_back();//deleting from back
    // list1.remove(9);//deleting from middle

    // Sorting the list
    // list1.sort();

    // Reversing the list
    list1.reverse();
    display(list1);

    // list declaration another method
    // list <int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    list<int> list2(3); // Empty list of size 7.
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 65;
    iter++;
    *iter = 5;
    iter++;
    *iter = 4;
    iter++;
  display(list2);
    
  list2.sort();
  list1.merge(list2);
  cout<<" List1 After Merging "<<endl;
  display (list1);
    return 0;
}





// self
/*#include<iostream>
#include<list>
using namespace std;
void display(list<int> &itl){
    int i;
   list<int>:: iterator it;
    for ( it=itl.begin();it!=itl.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;
    list1.push_back(20);
    list1.push_back(45);
    list1.push_back(75);
    list1.push_back(95);
    list1.push_back(245);
    list1.push_back(4785);
    list1.push_back(485);
    // display(list1);
    // list1.pop_back();
    // // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(75);
    list1.sort();
    display(list1);

    list<int> list2(4);
    list<int>:: iterator iter;
    iter = list2.begin();
    *iter = 98;
    iter++;
    *iter = 398;
    iter++;
    *iter = 298;
    iter++;
    *iter = 198;
    iter++;
    list2.sort();
    list2.remove(198);
    display(list2);
    list1.merge(list2);
    
    display(list1);

    return 0;
}*/