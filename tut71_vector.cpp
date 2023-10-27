//       **** This is tutorial number 71 ****

//     **** Vector in c++ STL ****
// For refrence tap on url ---> https://www.cplusplus.com/reference/vector/vector/

#include<iostream>
#include<vector>

using namespace std;

/*template<class T>
void display(vector<T> &v){
    int i;
    cout<<"Displaying this vector "<<endl;
    for ( i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    //    cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    // Ways to create vector 
    int element, size = 5; 
    vector<int> vec1; // zero length intiger vector
    // display(vec1);
    vector<char> vec2(4); // 4- element character vector
    // vec2.push_back('C');
    // display(vec2);
    vector<char> vec3(vec2); // 4- element character vector from vec2
    // vec2.push_back('C');
    // display(vec3);
    vector<int> vec4(4,33); //6s element vector of 3s
    display(vec4);
    cout<<"size : "<<vec4.size();

    return 0;
}*/


 void display(vector<int> &v){
    int i;
    for ( i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    //    cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;
    int element,i,size;
    cout<<"Enter your vector size : ";
    cin>>size;
    for ( i = 0; i< size; i++)
    {
        cout<<"\nEnter an element to add to this vector :\t";
        cin>>element;
        vec1.push_back(element);
    }
        // vec1.pop_back();// remove/delete last element in that array
    
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,545);
    display(vec1); 
    return 0;
}