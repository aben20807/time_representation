#include"timef.h"
int main()
{
    string mode;
    while(1)
    {
        printIntro();
        cin>>mode;
        if(mode=="e")
            break;
        else if(mode=="h")
            printHelp();
        else if(mode=="n")
        {
            time_t now=time(NULL);
            char strl[100],month[4],week[4];
            int year,date,hour,min,second;
            strcpy(strl,ctime(&now));
            sscanf(strl,"%s%s%d%d:%d:%d%d",week,month,&date,&hour,&min,&second,&year);
            //cout<<year<<" "<<month<<" "<<week<<" "<<date<<endl<<hour<<" "<<min<<" "<<second<<endl;
            //Time timenow=Time(year,month,week,date,hour,min,second);
            //cout<<timenow.year();
            Time timenow;
            timenow.setYear(year);
            timenow.setMonth(month);
            timenow.setWeek(week);
            timenow.setDate(date);
            timenow.setHour(hour);
            timenow.setMin(min);
            timenow.setSecond(second);
            cout<<timenow.getYear()<<" "<<timenow.getMonth()<<" "<<timenow.getWeek()<<" "<<timenow.getDate()<<endl
                <<timenow.getHour()<<":"<<timenow.getMin()<<":"<<timenow.getSecond()<<endl;
        }
    }
    return 0;
}
