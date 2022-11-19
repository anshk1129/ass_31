#include<iostream>
#include<string.h>
using namespace std;
class Item {
    protected:
 int  item_no;
 char name[20];
 float price;
};
class DiscountedItem:public Item{
    protected:
  float discount_price,discount_percent;
  public:
  DiscountedItem(){
    discount_percent=10.0f;
  }
    void set_item_no(){
        fflush(stdin);
        cout<<"\nEnter the item number ";
        cin>>item_no;
    }
     void set_item_name(){
        fflush(stdin);
        cout<<"\nEnter the item name ";
         fgets(name,20,stdin);
    }
     void set_item_price(){
        fflush(stdin);
        cout<<"\nEnter the item price ";
        cin>>price;
    }
    void total_discount(){
        discount_price=price-(price*discount_percent)/100.0f;
    }
void display(){
    cout<<"\nItem number -> "<<item_no;
    cout<<"\nItem name -> "<<name;
    cout<<"Item price -> "<<price;
    cout<<"\nTotal amount you have to pay is -> "<<discount_price;
}



};
int main(){
    DiscountedItem item[20];
    int cnt;
    cout<<"\nEnter how much item you want to purchase";
    cin>>cnt;
    for(int i=0;i<cnt;i++){
    item[i].set_item_no();
    item[i].set_item_name();
    item[i].set_item_price();
    item[i].total_discount();
    }
      for(int i=0;i<cnt;i++){
    item[i].display();
    }
}