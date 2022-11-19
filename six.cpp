#include<iostream>
using namespace std;
class B;
class A{
public:
int n;
A(){
n=20;
}
friend void swap(A &a,B &b);
void show(){
    cout<<"\nA value -> "<<n;
}
};
class B{
    public:
int n2;
B(){
n2=30;
}
friend void swap(A &a,B &b);
void show(){
    cout<<"\nB value -> "<<n2;
}
};
void swap(A &a,B&b){
    int tmp=a.n;
   a.n=b.n2;
   b.n2=tmp;

}
int main(){
    A a1;
    B b1;
    a1.show();
    b1.show();
    swap(a1,b1);
    a1.show();
    b1.show();

    return 0;
}