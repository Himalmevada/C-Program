#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

void intro()
{
    cout<<"Welcome to the Bus Reservation Program..."<<endl;
}

static int p = 0;
class Bus_Reser
{
  public:
        char busno[5];
        char drivern[10];
        char arrival[5];
        char depart[5];
        char from[10];
        char to[10];
        char seat[8][4][10];
        string price="140";

    public:
        void add_bus();
        void reserve_bus();
        void empty();
        void show_bus_detail();
        void available();
        void position(int i);
        void payment_method();
}

bus[10];

void Bus_Reser::add_bus()
{
  cout<<"Enter bus number: ";
  cin>>bus[p].busno;

  cout<<"Enter Driver's name: ";
  cin>>bus[p].drivern;

  cout<<"Arrival time: ";
  cin>>bus[p].arrival;

  cout<<"Departure: ";
  cin>>bus[p].depart;

  cout<<"From: ";
  cin>>bus[p].from;

  cout<<"To: ";
  cin>>bus[p].to;

  cout<<"\n Added Successfully....";

  bus[p].empty();
  p++;

  getch();

}

void Bus_Reser::reserve_bus()
{
  int seat;
  char number[5];
  top:
  cout<<"Bus number: ";
  cin>>number;
  int n;
  for(n=0;n<=p;n++)
  {
    if(strcmp(bus[n].busno, number)==0)
    break;
  }
  while(n<=p)
  {
    cout<<"\nSeat Number: ";
    cin>>seat;
    if(seat>32)
    {
      cout<<"\nThere are only 32 seats available in this bus.";
    }
    else
    {
      if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)
      {
        cout<<"Enter passanger's name: ";
        cin>>bus[n].seat[seat/4][(seat%4)-1];
        break;
      }
    else
      cout<<"The seat no. is already reserved.\n";
      }
      }
    if(n>p)
    {
      cout<<"Enter correct bus no.\n";
      goto top;
    }

    //cout<<"\n Added Successfully....";
	getch();
  }


void Bus_Reser::payment_method()
{
    int choice;
    cout<<"\nSelect payment method"<<endl;
    cout<<"1. Paytm"<<endl;
    cout<<"2. Google pay"<<endl;
    cout<<"3. Phone Pay"<<endl;
    cout<<"4. Net Banking"<<endl;
    cout<<"5. Debit card / Atm Card"<<endl;
    cin>>choice;
    OPTION:
    if(choice==1 || choice==2 || choice==3 || choice==4 || choice==5)
    {
        cout<<"Your Payment "<<price<<"rs is Successfull"<<endl;
        cout<<"Your Registration is Successfull"<<endl;
    }
    else
    {
        cout<<"Please enter valid choice";
        goto OPTION;
    }
    getch();
}

void Bus_Reser::empty()
{
  for(int i=0; i<8;i++)
  {
    for(int j=0;j<4;j++)
    {
      strcpy(bus[p].seat[i][j], "Empty");
    }
  }
}

void Bus_Reser::show_bus_detail()
{
  int n;
  char number[5];
  cout<<"Enter bus number: ";
  cin>>number;
  for(n=0;n<=p;n++)
  {
    if(strcmp(bus[n].busno, number)==0)
    break;
  }
  while(n<=p)
  {
  	cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
  	cout<<"Bus no: "<<bus[n].busno
  	<<"\nDriver: "<<bus[n].drivern<<"\nArrival time: "
  	<<bus[n].arrival<<"\nDeparture time: "<<bus[n].depart
  	<<"\nFrom: "<<bus[n].from<<"\nTo: "<<
  	bus[n].to<<"\n";
  	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
  	bus[0].position(n);

  	int a=1;
  	for (int i=0; i<8; i++)
  	{
    	for(int j=0;j<4;j++)
    	{
      	a++;
      	if(strcmp(bus[n].seat[i][j],"Empty")!=0)
      	cout<<"\nThe seat no "<<(a-1)<<" is reserved for "<<bus[n].seat[i][j]<<".";
    	}
  	}
  	break;
  	}
  	if(n>p)
    	cout<<"Enter correct bus no: ";

  	getch();
}

void Bus_Reser::position(int l)
{
  int s=0;p=0;
  for (int i =0; i<8;i++)
  {
    cout<<"\n";
    for (int j = 0;j<4; j++)
    {
      s++;
      if(strcmp(bus[l].seat[i][j], "Empty")==0)
        {
          cout.width(5);
          cout.fill(' ');
          cout<<s<<".";
          cout.width(10);
          cout.fill(' ');
          cout<<bus[l].seat[i][j];
          p++;
        }
        else
        {
        cout.width(5);
        cout.fill(' ');
        cout<<s<<".";
        cout.width(10);
        cout.fill(' ');
        cout<<bus[l].seat[i][j];
        }
      }
    }
    cout<<"\n\nThere are "<<p<<" seats empty in Bus Number: "<<bus[l].busno;
  }

void Bus_Reser::available()
{
  for(int n=0;n<p;n++)
  {
  		cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    	cout<<"Bus number: "<<bus[n].busno<<"\nDriver: "<<bus[n].drivern
    	<<"\nArrival time: "<<bus[n].arrival<<"\nDeparture Time: "
    	<<bus[n].depart<<"\nFrom: "<<bus[n].from<<"\nTo: "
    	<<bus[n].to;
    	cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
  }
getch();
}

int main()
{
system("cls");
int w;
while(1)
{
    system("cls");
    intro();
    cout<<"\n";
    cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t1. Add Bus"<<endl;
    cout<<"\t\t\t2. Reservation"<<endl;
    cout<<"\t\t\t3. Payment Method"<<endl;
    cout<<"\t\t\t4. Show Bus"<<endl;
    cout<<"\t\t\t5. Buses Available"<<endl;
    cout<<"\t\t\t6. Exit"<<endl;
    cout<<"\n\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\t\t\tEnter your choice:-> ";
    cin>>w;
    switch(w)
    {
        case 1: bus[p].add_bus();
                break;
        case 2: bus[p].reserve_bus();
                break;
        case 3: bus[p].payment_method();
                break;
        case 4: bus[0].show_bus_detail();
                break;
        case 5: bus[0].available();
                break;
        case 6: exit(0);
    }
}
return 0;
}
