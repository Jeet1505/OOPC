//This program is created by 23CE113_Jeet
#include<stdio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int i=1;
class TATA
{
    string name,fual_type;
    int seating;
    char airbags[3];
    float showroom_price,mileage,tank_capacity;
    char transmission[5];

public:
    //function to get the data
    void getdata()
    {
        cout << "Enter car name : ";
        fflush(stdin);
        getline(cin,name);

        cout << "Enter fuel type : ";
        fflush(stdin);
        cin >> fual_type;
        fflush(stdin);
        cout << "Enter showroom price : ";
        cin >> showroom_price;
        fflush(stdin);
        cout << "Enter mileage : ";
        cin >> mileage;
        fflush(stdin);
        cout << "Enter transmission type : ";
        fflush(stdin);
        cin >> transmission;
        fflush(stdin);
        cout << "Enter tank capacity : ";
        cin >> tank_capacity;
        fflush(stdin);
        cout << "Enter  seating : ";
        cin >> seating;
        fflush(stdin);
        cout << "Airbags are present or not  : ";
        cin >> airbags;
        fflush(stdin);
    }
    //function to display cars model name
    void modalname()
    {
        cout << name << endl;
    }
    //function to put the data / display the data
    void putdata()
    {

        cout << left << setw(7) << name ;
        cout << left << setw(7) << fual_type ;
        cout << left << setw(13) << showroom_price;
        cout << left << setw(14) << mileage;
        cout << left << setw(13) << transmission;
        cout << left << setw(22) << tank_capacity;
        cout << left << setw(8) << seating ;
        cout << left << setw(8) <<  airbags ;
    }
    //function to filter cars as per fuel type
    void fualputdata(int choice)
    {
        if(choice==1 && fual_type=="petrol")
        {
            putdata();
        }
        else if(choice==2 && fual_type=="diesel")
        {
            putdata();
        }
        else if(choice==3 && fual_type=="cng")
        {
            putdata();
        }
        else if(choice==4 && fual_type=="electric")
        {
            putdata();
        }
        else
            cout<<"Error: There is no such option.";
    }
    //function to filter cars as per price range
    void ch_3_putdata(float max_range)
    {
        if(showroom_price <= max_range)
        {
            putdata();
        }
    }
}cars[999];

int main()
{
    int n,choice;
    float range;

    cout << "Enter number of cars : ";
    cin >> n;
    fflush(stdin);
    for (i=1;i<=n;i++)
    {
        cars[i].getdata();
    }

    system("cls");

    cout << "WELCOME TO TATA MOTORS" << endl<<endl;
    cout << "GET THE CAR DETAIL AS PER YOUR PREFERENCE" << endl<<endl;
    cout << "1 - Modal Name \n2 - Fuel Type\n3 - Price Range" << endl<<endl;

    cout << "ENTER YOUR OPTION : ";
    cin >> choice ;
    cout << "--------------------------------------------" << endl;

    switch(choice)
    {
    case 1:
        //loop to display modal name
        for(i=1;i<=n;i++)
        {
            cout <<"("<<i<<")" ;
            cars[i].modalname();
        }
        cout << "CHOOSE YOUR CAR TO GET DETAILS : ";
        cin >> choice;

        cout << "Model  Fuel   Price(lakhs) Mileage(km/L) Transmission Tank capacity(liters) seating Airbags " << endl ;
        cars[choice].putdata();
        break;
    case 2:

            cout << "TATA MOTARS ARE AVAILABLE WITH FUAL OPTION " << endl<<endl;
            cout << "1 - Petrol \n2 - Diesel \n3 - CNG \n4 - Electic " << endl<<endl;
            cout << "ENTER YOUR FUEL PREFERENCE : ";
            cin >> choice;

            cout << "Model  Fuel  Price(lakhs) Mileage(km/L) Transmission Tank capacity(liters) seating Airbags " << endl ;
            //loop to filter as per fuel option
            for(i=1;i<=n;i++)
            {
                cars[i].fualputdata(choice);
                cout<<endl;
            }
            break;

    case 3:
        cout << "ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS : ";
        cin >> range;

        cout << "Model  Fuel  Price(lakhs) Mileage(km/L) Transmission Tank capacity(liters) seating Airbags " << endl ;
        //loop to filter as per price option
        for (i=1;i<=n;i++)
        {
            cars[i].ch_3_putdata(range);
            cout<<endl;
        }
        break;
    default:
        cout << "Invalid choice ";
    }

}
