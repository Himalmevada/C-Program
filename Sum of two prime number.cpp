#include<iostream>
int isprime(int n);
int nextprime(int n);
using namespace std;
main()
{
    int n,i;
    cout<<"Enter Number => ";
    cin>>n;
    for(i=2;i<=n-i;nextprime(i),i++)
    {
        if(isprime(n-i))
        {
            cout<<i<<"+"<<n-i<<"="<<n<<endl;
        }
    }
}

int nextprime(int n)
{
    do
        n++;
    while(!isprime(n));
    return(n);
}

int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return(0);
    return(1);
}
