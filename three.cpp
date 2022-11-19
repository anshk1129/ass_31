#include<iostream>
using namespace std;
class Student{
    protected:
int s1,s2,s3;
public:
void set_marks(){
    cout<<"Enter the marks of three subject\n";
    cin>>s1>>s2>>s3;
}

};
class Total:public Student{
    protected:
int total;
public:
void cal_total(){
total=s1+s2+s3;
}
};
class Percentage:public Total{
float percentage;
public:
void cal_percentage(){
    percentage=total/3.0;
}
void show_result(){
    cout<<"Your percentage is ->"<<percentage;
}
};
int main(){
    Percentage p;
    p.set_marks();
    p.cal_total();
    p.cal_percentage();
    p.show_result();
    return 0;


}

