#include<iostream>
#include<string.h>
using namespace std;
class Person{
char arr[30];
int age;
public:
void setName(){
    cout<<"Enter name\n";
    fgets(arr,30,stdin);
}
void setAge(int a){
age=a;
}
int getage(){
    return age;
}
char* getname(){
    return arr;
}
};
class Employee:public Person{
int eid;
float salary;
public:
void setid(int r){
    eid=r;
}
void setsalary(float s)
{
  salary=s;
}
int getid(){
    return eid;
}
float getsalary(){
    return salary;
}
};
int main(){
Employee e;
e.setName();
e.setAge(12);
e.setid(23);
e.setsalary(2000.89f);
cout<<"\nAge ->"<<e.getage();
cout<<"\nName ->"<<e.getname();
cout<<"\nId ->"<<e.getid();
cout<<"\nSalary ->"<<e.getsalary();

return 0;
}