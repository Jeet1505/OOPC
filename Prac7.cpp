//This program is created by 23CE113_Jeet
#include<iostream>
using namespace std;
class maths//maths class to perform different calculation on complex number
{
private:
    int r,i;
public:
    void getdata()
    {
        cout<<"Enter the real number:";
        cin>>r;
        cout<<"Enter the imaginary number:";
        cin>>i;
    }
    void putdata()
    {
        if(i>=0)
        cout<<r<<"+"<<i<<"i"<<endl;
        else
        cout<<r<<" "<<i<<"i"<<endl;
    }
    maths operator +(maths &o)//operator overload for '+'
    {
        maths temp;
        temp.r=r+o.r;
        temp.i=i+o.i;
        return temp;
    }
    maths operator -(maths &o)//operator overload for '-'
    {
        maths temp;
        temp.r=r-o.r;
        temp.i=i-o.i;
        return temp;
    }
    maths operator *(maths &o)//operator overload for '*'
    {
        maths temp;
        temp.r=(r*o.r)-(i*o.i);
        temp.i=(r*o.i)+(i*o.r);
        return temp;
    }
    maths operator /(maths &o)//operator overload for '/'
    {
        maths temp;
        temp.r=(r*o.r + i*o.i)/(o.r*o.r+o.i*o.i);
        temp.i=(i*o.r-r*o.i)/(o.r*o.r+o.i*o.i);
        return temp;
    }
    maths operator !()//operator overload for '!'
    {
        maths temp;
        temp.r=-r;
        temp.i=-i;
        return temp;
    }
}a,b,c;
int main()
{
    int n;
    char j;//Character Use for to continue the calculation or not
    do{
    a.getdata();
    b.getdata();
    cout<<"choose operation "<<endl<<"(1)(+) addition"<<endl
    <<"(2)(-) subtraction"<<endl
    <<"(3)(*) multiplication"<<endl
    <<"(4)(/) division"<<endl
    <<"(5)(!) negation"<<endl;
    cout<<"enter your choice :";
    cin>>n;
    switch(n)
    {
    case 1:
        {
        c=a+b;
        c.putdata();
        break;
        }
    case 2:
        {
         c=a-b;
         c.putdata();
         break;
        }
    case 3:
        {
        c=a*b;
        c.putdata();
        break;
        }
    case 4:
        {
         c=a/b;
         c.putdata();
         break;
        }
    case 5:
        {
        c=!a;
        c.putdata();
        c=!b;
        c.putdata();
        break;
    default:
        cout<<"Invalid choice";
        }
    }
    cout<<"Do you want to continue the calculation : y or n : ";
    cin>>j;
  }while(j=='y'||j=='Y');//loop for continue the calculation or not
}
