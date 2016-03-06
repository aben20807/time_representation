#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstring>
using namespace std;
void printIntro();
void printHelp();
/*void getYear();
void getMonth();
void getWeek();
void getDate();
void getHour();
void getMin();
void getSecond();*/
class Time
{
    public:
        Time();
        Time(int,string&,string&,int,int,int,int);
        
        int year;
        string month;
        string week;
        int date;
        int hour;
        int min;
        int second;
        
        void setYear(int);
        int getYear();
        void setMonth(string);
        string& getMonth();
        void setWeek(string);
        string& getWeek();
        void setDate(int);
        int getDate();
        void setHour(int);
        int getHour();
        void setMin(int);
        int getMin();
        void setSecond(int);
        int getSecond();

    private:
        int _year;
        string _month;
        string _week;
        int _date;
        int _hour;
        int _min;
        int _second;
};
