//             ***** This is tutorial 23******

//       *** c++ Objects Memory Allocation and using Arrays in Classes ***

#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100]; 
    int counter;
    public:
       void initCounter(void) { counter = 0;}
       void getPrice(void);
       void setPrice(void);
       void displyPrice(void);
};

 void shop :: getPrice(void)
{
    cout<<"Enter Id of your item"<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter ++;
 }
void shop :: displyPrice (void)
{
    for (int i = 0; i < counter; i++)
    {
    cout<<"The price of the item with item Id"<<itemId[i]<<"is"<<itemPrice[i]<<endl;
    }
    
}

int main()
{
  shop dukaan;  
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.displyPrice();
  return 0;
}