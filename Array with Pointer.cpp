#include<iostream>
using namespace std;
int main()
{
    int no[30],num=0,i,*n;//you can enter up to 30 number.
    n=no;
    cout<<"How many number you want to display : ";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>no[i];
    }
    cout<<"You entered numbers : "<<endl;
    for(i=0;i<num;i++)
    {
        cout<<*n<<endl;
        n++;
    }
    return 0;
}
