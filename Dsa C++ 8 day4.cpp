#include<iostream>
#include<string>
using namespace std;
 int main()
 {
     int choice;
     char cont;
     int car =0;
     int bike =0;
     int rikshaw =0;
     do{
     cout<<"CAR PARKING"<<endl;
     cout<<"1 . Park Car"<<endl;
     cout<<"2 . Park Bike"<<endl;
     cout<<"3 . Park Rikshaw"<<endl;
     cout<<"4 . Exit"<<endl;
     cin>>choice;

     switch(choice)
     {
     case 1:
        car++;
        cout<<"Car Parked!"<<endl;
        cout<<"Total Cars parked : "<<car<<endl;
        break;

    case 2:
        bike++;
        cout<<"Bike Parked!"<<endl;
        cout<<"Total Bikes parked : "<<bike<<endl;
        break;

    case 3:
        rikshaw++;
        cout<<"Rikshaw Parked!"<<endl;
        cout<<"Total Rikshaw parked : "<<rikshaw<<endl;
        break;

    case 4:
        cout<<"Have a nice day"<<endl;
        exit(0);

        default :
        cout<<"Please Enter valid choice"<<endl;
     }
     cout<<"Do you wnat to perform again"<<endl;
     cout<<"Y/Yes or N/No"<<endl;
     cin>>cont;

     }
     while(cont == 'Y'|| cont == 'y');{
     }
     return 0;

 }
