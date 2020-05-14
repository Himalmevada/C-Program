#include<iostream.h>
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();
using namespace std;
int main()
{
    int choice;
    cout<<"Enter Number under 1 to 8 : ";
    cin>>choice;
    cout<<"Let us see which type of pattern you deserved"<<endl;
    switch(choice)
    {
    case 1:
        pattern1();
        break;
    case 2:
        pattern2();
        break;
    case 3:
        pattern3();
        break;
    case 4:
        pattern4();
        break;
    case 5:
        pattern5();
        break;
    case 6:
        pattern6();
        break;
    case 7:
        pattern7();
        break;
    case 8:
        pattern8();
        break;
    default :
        cout<<"Invalid Choice";
        break;
    }
    return 0;
}

void pattern1(void)
{
    int i,j,n,k;
    cout<<"Enter Rows =>";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=2;k<=i;k++)
        {
            cout<<" ";
        }
        for(j=i;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(void)
{
    int i,j,n,k;
    cout<<"Enter Rows =>";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=2;k<i*2;k++)
        {
            cout<<" ";
        }
        for(j=i;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(void)
{
    int i,j,n;
    cout<<"Enter rows : ";
    cin>>n;
    for(i=1;i<=n+1;i++)
    {
        for(j=n+1;j>i;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=((2*i)-1);j++)
        {
            if(j%2==0)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}


void pattern4(void)
{
    int n,s,j,i;
    cout<<"Enter rows : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(s=n;s>i;s--)
        {
            cout<<" ";
        }

        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }

    for(i=n-1;i>=1;i--)
    {
        for(s=n;s>i;s--)
        {
            cout<<" ";
        }

        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}

void pattern5(void)
{
    int i,j,n;
    cout<<"Enter rows : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<"  ";
        }
        for(j=1;j<=((2*i)-1);j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

void pattern6(void)
{
    int i,j,n=0,k;
    cout<<"Enter Rows =>";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=0;
        while(k!=(n-i))
        {
            cout<<" ";
            k++;
        }

        for(j=1;j<=((2*i)-1);j++)
        {
            if((j==1) || (j==((2*i)-1)))
                cout<<i;
            else
                cout<<"0";
        }
        cout<<endl;
    }
}

void pattern7(void)
{
    int n,s,j,i;
    cout<<"Enter rows : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if( i==n || j==1 || j==i )
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(void)
{
int n,s,j,i,k;
    cout<<"Enter rows : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=n;k>i;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            if( i==n || j==1 || j==i )
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

