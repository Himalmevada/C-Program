#include<iostream>
#include<iomanip>
using namespace std;
class TIME
{
    private :
        int hour;
        int minute;
        int second;
        int tnsecond;

    public :
        enter_hour();
        enter_minute();
        enter_second();
        time_in_second();
        display();
};


TIME :: enter_hour()
{
    cout<<"Enter Time :"<<endl;
    cout<<"Hour? ";
    cin>>hour;
}

TIME :: enter_minute()
{
    cout<<"Minute? ";
    cin>>minute;
}


TIME :: enter_second()
{
    cout<<"Second? ";
    cin>>second;
}


TIME :: time_in_second()
{
    tnsecond=hour*3600+minute*60+second;
}


TIME :: display()
{
    cout<<"The time is = "<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minute<<":"
                          <<setw(2)<<setfill('0')<<second<<endl;

    cout<<"Time in Total Second : "<<tnsecond;
}


main()
{
    TIME tp;
    tp.enter_hour();
    tp.enter_minute();
    tp.enter_second();
    tp.time_in_second();
    tp.display();
}
