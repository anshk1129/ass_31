#include<iostream>
#include<string.h>
using namespace std;
class worker{
protected:
int code;
char name[30];
float salary;
public:
worker(){

}
worker(int c,char *n,float sal){
    code=c;
    strcpy(name,n);
    salary=sal;
}

};
class Officer{
protected:
float DA,HRA;
public:
Officer(float dd,float hh){
    DA=dd;
    HRA=hh;
}
Officer(){
    
}

};
class Manager:public worker, public Officer{
protected:
float TA,gross_sal;
public:
Manager(int c,int *n,float sal,float dd,float hh): worker(c,n,sal),Officer(dd,hh){

}
Manager(){

}
void dahra(){
    cout<<"\n Enter Da :";
    cin>>DA;
    cout<<"\n Enter HRA : ";
    cin>>HRA;
    TA=0.10*salary;
    gross_sal=DA+HRA+TA+salary;
}
void total_sal(){
    cout<<"\nCode : "<<code;
    cout<<"\nName  : "<<name;
    cout<<"Salary : "<<salary;
   cout<<"DA : "<<DA;
   cout<<"HRA : "<<HRA;
   cout<<"Gross Salary : "<<gross_sal;

}
};
int main(){
    Manager *m;
    int n,code,da,hra;
    char name[20];
    float salary;

    cout<<"\n Enter how much manager you want";
    cin>>n;
    m=new Manager[n];
    for(int i=0;i<n;i++){
      cout<<"\nEnter code : ";
      cin>>code;
      cout<<"\nEnter name : ";
      fflush(stdin);
      fgets(name,20,stdin);
      cout<<"\nEnter salary : ";
      cin>>salary;
      cout<<"\nEnter DA : ";
      cin>>da;
      cout<<"\nEnter HRA : ";
      cin>>hra;
        m[i]=Manager(code,name,salary,da,hra);
    }
}
