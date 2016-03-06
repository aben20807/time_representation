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
/*time_t now=time(NULL);
char strl[100],_month[4],_week[4];
int _year,_date,_hour,_min,_second;
strcpy(strl,ctime(&now));
sscanf(strl,"%s%s%d%d:%d:%d%d",_week,_month,&_date,&_hour,&_min,&_second,&_year);
*/
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
Time::Time(int year,string& month,string& week,int date,int hour,int min,int second)
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
string& Time::getMonth()
{
    return _month;
}
string& Time::getWeek()
{
    return _week;
}
int Time::getDate()
{
    return _date;
}
int Time::getHour()
{
    return _hour;
}
int Time::getMin()
{
    return _min;
}
int Time::getSecond()
{
    return _second;
}
