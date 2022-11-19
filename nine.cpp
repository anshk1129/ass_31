// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
#include<iostream>
using namespace std;
class Student{
protected:
int id;
char name[20];
public:
void set_id(){
    cout<<"Enter student id ";
    cin>>id;
}
void set_name(){
    cout<<"\nEnter students name : ";
    fflush(stdin);
    fgets(name,20,stdin);
}
};
class StudentExam:public Student{
protected:
int marks[6];
int total=0;
public:
void set_marks(){
for(int i=0;i<6;i++){
    cout<<"\nEnter the marks of subject "<<i+1<<": "<<endl;
    cin>>marks[i];
    total=total+marks[i];
}
}

};
class StudentResult:public StudentExam{ 
float percentage;
public:
void show_result(){
    percentage=(total)/6.0f;
    cout<<"\nPercentage = "<<percentage<<" %";
}
};
int main(){
    int n;
    StudentResult *s;
    cout<<"\nEnter number of student you want ";
    cin>>n;
    s=new StudentResult [n];
    for(int i=0;i<n;i++){
        s[i].set_id();
        s[i].set_name();
        s[i].set_marks();
        s[i].show_result();
    }
   return 0;
}