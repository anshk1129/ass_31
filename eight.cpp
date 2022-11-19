#include<iostream>
using namespace std;
class Customer {
    protected:
  char name[20];
  long long  phone_number;
  public:
  void set_name(){
     cout<<"\n Enter customer name : ";
     fflush(stdin);
     fgets(name,20,stdin);
  }
  void set_phone(){
   cout<<"\n Enter your phone number : ";
   fflush(stdin);
   cin>>phone_number;
  }
};
class Deposit:public Customer{
    protected:
int accno;
float balance;
public:
void set_account(){
    cout<<"\n Enter account number : ";
    fflush(stdin);
    cin>>accno;
}
void set_balance(){
    cout<<"\n Enter balance ";
    cin>>balance;
}
};
class Borrower:public Deposit {
    int loan_no;
    float  loan_amt;
    public:
    void set_loan(){
    cout<<"\n Enter loan number : ";
    fflush(stdin);
    cin>>loan_no;
    }
    void loan_amount(){
        cout<<"\n Enter loan amount : ";
        fflush(stdin);
        cin>>loan_amt;
    }
    void show(){
        cout<<"\n Customer Name : "<<name;
        cout<<" Customer Phone Number : "<<phone_number;
        cout<<"\n Customer Account Number : "<<accno;
        cout<<"\n Balance "<<balance;
    }
    };
    int main(){
        Borrower *b1;
        int n;
        cout<<"\n Enter number of customers you want : ";
        cin>>n;
        b1=new Borrower[n];
        for(int i=0;i<n;i++){
            b1[i].set_name();
            b1[i].set_phone();
            b1[i].set_account();
            b1[i].set_balance();
            b1[i].set_loan();
            b1[i].loan_amount();
        }
        for(int i=0;i<n;i++){
            b1[i].show();
        }
    }