#include"timef.h"
void printIntro()
{
    cout<<"Transport time now(input n)"<<endl
        <<"or transport your input time(input i)"<<endl
        <<"or need for helps(input h)"<<endl
        <<"or exit(input e)"<<endl
        <<"choose mode:";
}
void printHelp()
{
    cout<<endl<<"*********************************************************"
        <<endl<<"This is a program to transport time into English form."<<endl
        <<"n:transport time now."<<endl
        <<"i:transport time by your input."<<endl
        <<"h:go in this USELESS help again OuO."<<endl
        <<"e:exit from the loop."<<endl
        <<"*********************************************************"<<endl<<endl;
}
Time::Time()
{
    _year=1;
    _month="JUN";
    _week="MON";
    _date=1;
    _hour=0;
    _min=0;
    _second=0;
}
Time::Time(int year,string month,string week,int date,int hour,int min,int second)
{
    _year=year;
    _month=month;
    _week=week;
    _date=date;
    _hour=hour;
    _min=min;
    _second=second;
}
void Time::setYear(int year)
{
    _year=year;
}
int Time::getYear()
{
    return _year;
}
void Time::setMonth(string month)
{
    _month=month;
}
string& Time::getMonth()
{
    return _month;
}
void Time::setWeek(string week)
{
    _week=week;
}
string& Time::getWeek()
{
    return _week;
}
void Time::setDate(int date)
{
    _date=date;
}
int Time::getDate()
{
    return _date;
}
void Time::setHour(int hour)
{
    _hour=hour;
}
int Time::getHour()
{
    return _hour;
}
void Time::setMin(int min)
{
    _min=min;
}
int Time::getMin()
{
    return _min;
}
void Time::setSecond(int second)
{
    _second=second;
}
int Time::getSecond()
{
    return _second;
}
string Time::getEngRepre()
{
    int h=_hour,m=_min;
    string tmp="It's ";
    switch(h)
    {
        case 0:
            tmp+="zero";
        case 1:
            tmp+="one";
        case 2:
            tmp+="two";
        case 3:
            tmp+="three";
        case 8:
        case 20:
            tmp+="eight";

    }
    return tmp;
}
