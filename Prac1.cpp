#include<stdio.h>
#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int tgrade_point(int);
int pgrade_point(int);
char tgrade(int);
char pgrade(int);
int main()
{
    //t=theory,p=practical
    int i,tgc,tgbe,tgpc;//tgc=theory grade of given subject mark
    int pgc,pgbe,pgpc;//pgc=practical grade of given subject mark
    char s_id[8];//student id
    string s_name;//student name
    string sub[3];//subject
    int sem;
    float sgpa;
    int tmarks[3],pmarks[3];
    //student information
    cout<<"Enter student ID:";
    cin>>s_id;
    cout<<"Enter student name:";
    cin>>s_name;
    cout<<"Enter Semester:";
    cin>>sem;
    fflush(stdin);
    //Subject information
    cout<<"Enter Subject name:"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<i+1<<":";
        getline(cin,sub[i]);
    }
    for(i=0;i<3;i++)
    {
        cout<<"Enter Theory marks for:"<<sub[i]<<":";
        cin>>tmarks[i];
    }
    for(i=0;i<3;i++)
    {
        cout<<"Enter Practical marks for:"<<sub[i]<<":";
        cin>>pmarks[i];
    }
    fflush(stdin);
    tgc=tgrade_point(tmarks[0]);
    tgbe=tgrade_point(tmarks[1]);
    tgpc=tgrade_point(tmarks[2]);
    pgc=pgrade_point(pmarks[0]);
    pgbe=pgrade_point(pmarks[1]);
    pgpc=pgrade_point(pmarks[2]);
    system("cls");//use to clear the screen
    //Result of the student
    cout<<endl<<"Your Result:"<<endl;
    cout<<endl<<"Student ID:"<<setw(5)<<s_id;
    cout<<endl<<"Student Name:"<<setw(5)<<s_name;
    cout<<endl<<"Semester:"<<setw(6)<<sem;
    cout<<endl<<setw(25)<<" "<<"Theory"<<setw(5)<<" "<<"Practical"<<endl;
	cout<<"Computer Programming:"<<setw(7);cout<<setw(10)<<tgrade(tgc);cout<<pgrade(pgc);cout<<endl;
	cout<<"Basics of Electronics:"<<setw(6);cout<<setw(10)<<tgrade(tgbe);cout<<pgrade(pgbe);cout<<endl;
	cout<<"Professional Programming:"<<setw(3);cout<<setw(10)<<tgrade(tgpc);cout<<pgrade(pgpc);cout<<endl;
    //Logic of SGPA
	sgpa = (3*tgc + 3*tgbe + 3*tgpc +3*pgc + 3*pgbe + 3*pgpc)/18.0;
	cout<<endl<<setprecision(3)<<"sgpa: "<<sgpa<<endl;
}
//function to return theory grade point
int tgrade_point(int tm)
{
    if(tm>=80)
        return 10;
    else if(tm<80 && tm>=73)
        return 9;
    else if(tm<73 && tm>=66)
        return 8;
    else if(tm<66 && tm>=60)
        return 7;
    else if(tm<60 && tm>=55)
        return 6;
    else if(tm<55 && tm>=50)
        return 5;
    else if(tm<50 && tm>=45)
        return 4;
    else
        return 3;
}
//function to return practical grade point
int pgrade_point(int pm)
{
    if(pm>=80)
        return 10;
    else if(pm<80 && pm>=73)
        return 9;
    else if(pm<73 && pm>=66)
        return 8;
    else if(pm<66 && pm>=60)
        return 7;
    else if(pm<60 && pm>=55)
        return 6;
    else if(pm<55 && pm>=50)
        return 5;
    else if(pm<50 && pm>=45)
        return 4;
    else
        return 3;
}
//function to return theory grade
char tgrade(int tgrade_point)
{
   if(tgrade_point==10){
        cout<<"AA";
        return ' ';
   }
   else if(tgrade_point==9){
        cout<<"AB";
        return ' ';
   }
    else if(tgrade_point==8){
        cout<<"BB";
        return ' ';
    }
    else if(tgrade_point==7){
        cout<<"BC";
        return ' ';
    }
    else if(tgrade_point==6){
        cout<<"CC";
        return ' ';
   }
    else if(tgrade_point==5){
        cout<<"CD";
        return ' ';
    }
    else if(tgrade_point==4){
        cout<<"DD";
        return ' ';
    }
    else{
        cout<<"FF";
        return ' ';
    }
}
//function to return practical grade
char pgrade(int pgrade_point)
{
   if(pgrade_point==10){
        cout<<"AA";
        return ' ';
   }
   else if(pgrade_point==9){
        cout<<"AB";
        return ' ';
   }
    else if(pgrade_point==8){
        cout<<"BB";
        return ' ';
    }
    else if(pgrade_point==7){
        cout<<"BC";
        return ' ';
    }
    else if(pgrade_point==6){
        cout<<"CC";
        return ' ';
   }
    else if(pgrade_point==5){
        cout<<"CD";
        return ' ';
    }
    else if(pgrade_point==4){
        cout<<"DD";
        return ' ';
    }
    else{
        cout<<"FF";
        return ' ';
    }
}
