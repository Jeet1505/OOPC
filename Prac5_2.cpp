//this program is created by 23CE113_Jeet
//dynamic memory
#include<iostream>
int c;//counter Variable
using namespace std;
class circle
{
    int r,area;//r=radius

public:
    circle()
    {
        r=1;
        c++;
    }
    circle(int a)
    {
        r=a;
        c++;
    }
    circle(circle &rad)
    {
        r=rad.r;
    }
    ~circle()
    {
        cout<<"one object is deleted"<<endl;
        cout<<"total active object is "<<c--<<endl;
    }
    void display()
    {
        cout<<"circle area of radius "<<r<<" is :"<<3.148*r*r<<endl;//area of a circle
    }
};
int main()
{

    circle *c1=new circle();
    c1->display();
    delete c1;
    circle *c2=new circle(20);
    c2->display();
    delete c2;
    circle *c3=new circle(*c1);
    c3->display();
    delete c3;
}
