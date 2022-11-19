#include <iostream>
using namespace std;
class Employee
{
public:
    int emp_code;
    char name[20];
};
class PartTime : public Employee
{
public:
    int nowh, hourly_rate;
    float salary;
    void ask_ecode()
    {
        fflush(stdin);
        cout << "\nEnter your id";
        cin >> emp_code;
    }
    void ask_name()
    {
          fflush(stdin);
        cout << "\n Enter your name ";
        fgets(name, 20, stdin);
    }
    void ask_nowh()
    {
          fflush(stdin);
        cout << "\nEnter you working hour";
        cin >> nowh;
    }
    void ask_hr()
    {
          fflush(stdin);
        cout << "\nEnter your hour rate";
        cin >> hourly_rate;
    }
    void show()
    {
        cout << "\n--------------------------------------";
        cout << "\n Employee Number -> " << emp_code;
        cout << "\n Employee Name -> " << name;
        cout << "Salary -> " << (salary = nowh * hourly_rate);
        cout << "\nStatus -> Part Time";
    }
};
class FullTime : public Employee
{
public:
    int daily_rate, nod;
    float salary;
    void ask_ecode()
    {
          fflush(stdin);
        cout << "\nEnter your id";
        cin >> emp_code;
    }
    void ask_name()
    {
          fflush(stdin);
        cout << "\n Enter your name ";
        fgets(name, 20, stdin);
    }
    void ask_nowh()
    {
        //   fflush(stdin);
        cout << "\nEnter your daily rate ";
        cin >> daily_rate;
    }
    void ask_nod()
    {
        //   fflush(stdin);
        cout << "\nEnter your days ";
        cin >> nod;
    }
    void show()
    {
        cout << "\n--------------------------------------";
        cout << "\n Employee Number -> " << emp_code;
        cout << "\n Employee Name -> " << name;
        cout << "Salary -> " <<(salary=nod *daily_rate);
        cout << "\nStatus -> Part Time";
    }
};
int main()
{
    int v = 0, v1 = 0;
    char ch, ch1;
    int myid, flg = 0;
    PartTime p[10];
    FullTime f[10];
    while(1){
    cout << "\n 1. Enter Record";
    cout << "\n 2. Display Record";
    cout << "\n 3. Search Record";
    cout << "\n 4. Quit ";
    cout << "\n Enter your choice ";
      fflush(stdin);
    cin>>ch;
    switch (ch)
    {
    case '1':
        cout << "\n1. Part Time ";
        cout << "\n2. Full Time  ";
          fflush(stdin);
        cin >> ch1;
        switch (ch1)
        {
        case '1':
            p[v].ask_ecode();
            p[v].ask_name();
            p[v].ask_hr();
            p[v].ask_nowh();
            v++;
            break;
        case '2':
            f[v1].ask_ecode();
            f[v1].ask_name();
            f[v1].ask_nod();
            f[v1].ask_nowh();
            v1++;
            break;
        default:
            cout << "\nInvalid";
        }
        break;
    case '2':
        for (int i = 0; i < v; i++)
        {
            p[i].show();
        }
        for (int i = 0; i < v1; i++)
        {
            f[i].show();
        }
        break;
    case '3':
      fflush(stdin);
        cout << "\nEnter you id ";
        cin >> myid;
        for (int i = 0; i < v; i++)
        {
            if (p[i].emp_code == myid)
            {
                p[i].show();
                flg = 1;
                break;
            }
        }
            for (int i = 0; i < v1; i++)
            {
                if (f[i].emp_code == myid)
                {
                    f[i].show();
                    flg = 1;
                    break;
                }
            }
        if (flg == 0)
            {
                cout << "\n Search Unsuccessfull";
                flg = 0;
            }
            break;
    case '4':
            exit(0);
    }
    }
    return 0;
}