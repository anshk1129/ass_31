#include<iostream>
using namespace std;
class Base{
int a,b;
public:
void set_val(){
    cout<<"Enter two numbers for addition\n";
    cin>>a>>b;
}
int addition(){
    return a+b;
}
};
class Derived :public Base{
public:
void show(){
cout<<"Addition of two numbers is -> "<<addition();
}

};
int main(){
    Derived d;
    d.set_val();
    d.show();
    return 0;
}