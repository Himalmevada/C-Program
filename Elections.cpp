#include<iostream>
#include<windows.h>
using namespace std;
main()
{
    int age,choice,select,i=0,j=0;
    cout<<"Enter Your Age : ";
    cin>>age;
    if(age>=18)
    {
        cout<<"You are eligible for vote"<<endl;
    }
    else
    {
        cout<<"You are not eligible for vote"<<endl;
        cout<<"Wait for complete 18 year"<<endl;
        exit(0);
    }

    choose:
    cout<<"\nPress '1' to give vote or '0' for exit"<<endl;
    cin>>select;

    if(select==1)
    {
        goto menu;
    }
    else if(select==0)
    {
        exit(0);
    }
    else
    {
        cout<<"\nInvalid choice"<<endl;
        system("cls");
        goto choose;
    }
    menu:
    cout<<"\nChoose your Political Party -->"<<endl;
    cout<<"\n1. BJP(Bharatiya Janta Party)"<<"\n2. BSP(Bahujan Samaj Party)"<<"\n3. Congress"<<"\n4. Shiv Sena"<<"\n5. RSP(Rashtriya Samaj Paksha)"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<"\nThank you for supporting BJP(Bharatiya Janta Party)\n";
        break;

    case 2:
        cout<<"\nThank you for supporting BSP(Bahujan Samaj Party)\n";
        break;

    case 3:
        cout<<"\nThank you for supporting Congress\n";
        break;

    case 4:
        cout<<"\nThank you for supporting Shiv Sena\n";
        break;

    case 5:
        cout<<"\nThank you for supporting RSP(Rashtriya Samaj Paksha)\n";
        break;

    default:
        cout<<"\nInvalid Choice"<<endl;
        system("cls");
        goto menu;

    }
    return 0;
}
