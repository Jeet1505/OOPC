//This program is created by 23CE113_Jeet
#include<stdio.h>
#include <iostream>
#include<iomanip>
using namespace std;
int n;
class employee
{
    int id;
    string name;
    string qucalification;
    int experince;
    static float avg_exp;//average experience
    static int count;
    long long int con_number;
public:
    //function to get the details
    void getdetail()
    {
        cout<<"Enter the Employee Detail"<<endl;
        fflush(stdin);
        cout << "Enter the Employee ID:";
        cin >> id;
        cout << "Enter Empoyee Name:";
        getchar();
        getline(cin, name);
        fflush(stdin);
        cout << "Enter the Qucalification:";
        getline(cin, qucalification);
        fflush(stdin);
        cout << "Enter Experince:";
        cin >> experince;
        fflush(stdin);
        cout << "Enter the Contact Number:";
        cin >> con_number;
        fflush(stdin);
        avg_exp+=experince;
        count++;
    }
    //function to display the details
    void display()
    {
        cout.width(20);
        cout <<left<<"Employee ID"<<":"<< id << endl;
        cout.width(20);
        cout<<left<<"Employee Name"<<":"<< name<<endl;
        cout.width(20);
        cout<<left<<"Qualification"<<":"<<qucalification << endl;
        cout.width(20);
        cout<<left <<"Experience"<<":"<< experince << endl;
        cout.width(20);
        cout<<left<<"Contact Number"<<":"<< con_number<<endl;
    }
    //static function for average experience
    static void avg_experience()
    {
    cout<<endl<<"Average experience of "<<n<<"Employee is:"<<avg_exp/count<<"Years";
    }
    int getid()
    {
        return id;
    }
};
//declaring static variable
float employee::avg_exp;
int employee::count;
int main()
{

    cout << "Enter the number of Employee:";
    cin >> n;
    employee e[n];
    //loop to get details for n numbers of employee
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Detail for "<<i+1<<"Employee"<<endl;
        e[i].getdetail();
    }
    char ch;
    int emp_id;
    do
    {
        cout << "Enter Employee id which you check:";
        cin >> emp_id;
        //loop to get details for specific employee id
        for (int i = 0; i < n; i++)
        {

            if (emp_id == e[i].getid())//check if id is available or not
            {
                e[i].display();
                break;
            }

             else
            {
                cout << "ERROR:ENTERED EMPLOYEE ID DOSE NOT EXIST"<<endl;
            }
        }
        cout<<"Press Y for auother Employee detail:";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
     employee::avg_experience();
}

