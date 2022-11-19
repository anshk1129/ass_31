#include<iostream>
#include<string.h>
using namespace std;
class Person{
    protected:
char name[20], address[20];
long long phone_no;

};
class Employee:public Person{
protected:
 int eno;
 char  ename[30];
};
class Manager :public Employee{
    public:
char designation[20], department_name[30];
float basic_salary;
void set_name(){
    fflush(stdin);
    cout<<"\nEnter the name ";
 fgets(name,20,stdin);
}
void set_address(){
    fflush(stdin);
       cout<<"\nEnter the address ";
 fgets(address,20,stdin);
}
void set_eid(){
    cout<<"\nEnter employee id";
     cin>>eno;
}
void set_designation(){
    fflush(stdin);
    cout<<"\n Enter the designation ";
      fgets(designation,20,stdin);
}
void departmnt_name()

{
    fflush(stdin);
    cout<<"\n Enter the name of department ";
      fgets(department_name,20,stdin);
}
void set_salary(){
    fflush(stdin);
    cout<<"\nEnter the salary ";
    cin>>basic_salary;
}

};
int main(){
    int cnt;
    Manager m[20];
    cout<<"\nEnter how much employee u want to enter";
       cin>>cnt;
       fflush(stdin);
       for(int i=0;i<cnt;i++){
        m[i].set_name();
        m[i].set_address();
        m[i].set_eid();
        m[i].departmnt_name();
        m[i].set_designation();
        m[i].set_salary();
       }
       float tmp=m[0].basic_salary;
       for(int i=1;i<cnt;i++){
        if(tmp<m[i].basic_salary){
            tmp=m[i].basic_salary;
        }
       }
       cout<<"\nEmployee with high salary is "<<tmp;
       

}