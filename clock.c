#include<stdio.h>
#include<time.h>
#include<string.h>
#include <stdlib.h>
int transmonth(char []);
int transweek(char []);	
void display(int,char [],int,char [],int,int,int);
int seg[10][7]={{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},
                    {1,1,0,1,1,0,1},{1,1,1,1,0,0,1},
                    {0,1,1,0,0,1,1},{1,0,1,1,0,1,1},
                    {1,0,1,1,1,1,1},{1,1,1,0,0,0,0},
                    {1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};
char digit[5][30];
int main()
{
	while(1)
	{
		int i,j;
		time_t now=time(NULL);
		//printf("%s\n",ctime(&now));
		char strl[100],month[4],week[4];
		int year,date,hour,min,second;
		strcpy(strl,ctime(&now));
		sscanf(strl,"%s%s%d%d:%d:%d%d",week,month,&date,&hour,&min,&second,&year);
		memset(digit,' ',sizeof(digit));
		//printf("%c\n","═");
		//digit[1][11]='1';
		digit[1][10]=digit[1][20]=digit[3][10]=digit[3][20]='.';		
		//printf("%d %d\n",transmonth(month),transweek(week));
		display(year,month,date,week,hour,min,second);
		printf("\n**********made by OuO**********\n");
		sleep(1);
		system("clear");
	}
	return 0;
}
/*int transmonth(char m[])
{
	int i;
	char enmonth[][3]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	for(i=0;i<12;i++)
	{
		if(strcmp(m,enmonth[i])==0)
			return i+1;
	}
}
int transweek(char w[])
{
	int i;
	char enweek[][3]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
	for(i=0;i<7;i++)
	{
		if(strcmp(w,enweek[i])==0)
			return i+1;
	}
}*/
void display(int y,char m[],int d,char w[],int h,int min,int s)
{
	int i,j;
	printf("\n*******************************\n  %d年    %s    %d    %s\n\n",y,m,d,w);
	for(i=0;i<5;i++)
	{
		for(j=0;j<30;j++)
		{
			if((i==0)&&(j==2)&&(seg[h/10][0]))digit[i][j]='=';
			if((i==0)&&(j==7)&&(seg[h%10][0]))digit[i][j]='=';
			if((i==0)&&(j==12)&&(seg[min/10][0]))digit[i][j]='=';
			if((i==0)&&(j==17)&&(seg[min%10][0]))digit[i][j]='=';
			if((i==0)&&(j==22)&&(seg[s/10][0]))digit[i][j]='=';
			if((i==0)&&(j==27)&&(seg[s%10][0]))digit[i][j]='=';
			
			if((i==1)&&(j==3)&&(seg[h/10][1]))digit[i][j]='|';
			if((i==1)&&(j==8)&&(seg[h%10][1]))digit[i][j]='|';
			if((i==1)&&(j==13)&&(seg[min/10][1]))digit[i][j]='|';
			if((i==1)&&(j==18)&&(seg[min%10][1]))digit[i][j]='|';
			if((i==1)&&(j==23)&&(seg[s/10][1]))digit[i][j]='|';
			if((i==1)&&(j==28)&&(seg[s%10][1]))digit[i][j]='|';
			
			if((i==3)&&(j==3)&&(seg[h/10][2]))digit[i][j]='|';
			if((i==3)&&(j==8)&&(seg[h%10][2]))digit[i][j]='|';
			if((i==3)&&(j==13)&&(seg[min/10][2]))digit[i][j]='|';
			if((i==3)&&(j==18)&&(seg[min%10][2]))digit[i][j]='|';
			if((i==3)&&(j==23)&&(seg[s/10][2]))digit[i][j]='|';
			if((i==3)&&(j==28)&&(seg[s%10][2]))digit[i][j]='|';
																		
			if((i==4)&&(j==2)&&(seg[h/10][3]))digit[i][j]='=';
			if((i==4)&&(j==7)&&(seg[h%10][3]))digit[i][j]='=';
			if((i==4)&&(j==12)&&(seg[min/10][3]))digit[i][j]='=';
			if((i==4)&&(j==17)&&(seg[min%10][3]))digit[i][j]='=';
			if((i==4)&&(j==22)&&(seg[s/10][3]))digit[i][j]='=';
			if((i==4)&&(j==27)&&(seg[s%10][3]))digit[i][j]='=';
			
			if((i==3)&&(j==1)&&(seg[h/10][4]))digit[i][j]='|';
			if((i==3)&&(j==6)&&(seg[h%10][4]))digit[i][j]='|';
			if((i==3)&&(j==11)&&(seg[min/10][4]))digit[i][j]='|';
			if((i==3)&&(j==16)&&(seg[min%10][4]))digit[i][j]='|';
			if((i==3)&&(j==21)&&(seg[s/10][4]))digit[i][j]='|';
			if((i==3)&&(j==26)&&(seg[s%10][4]))digit[i][j]='|';							

			if((i==1)&&(j==1)&&(seg[h/10][5]))digit[i][j]='|';
			if((i==1)&&(j==6)&&(seg[h%10][5]))digit[i][j]='|';
			if((i==1)&&(j==11)&&(seg[min/10][5]))digit[i][j]='|';
			if((i==1)&&(j==16)&&(seg[min%10][5]))digit[i][j]='|';
			if((i==1)&&(j==21)&&(seg[s/10][5]))digit[i][j]='|';
			if((i==1)&&(j==26)&&(seg[s%10][5]))digit[i][j]='|';
			
			if((i==2)&&(j==2)&&(seg[h/10][6]))digit[i][j]='=';
			if((i==2)&&(j==7)&&(seg[h%10][6]))digit[i][j]='=';
			if((i==2)&&(j==12)&&(seg[min/10][6]))digit[i][j]='=';
			if((i==2)&&(j==17)&&(seg[min%10][6]))digit[i][j]='=';
			if((i==2)&&(j==22)&&(seg[s/10][6]))digit[i][j]='=';
			if((i==2)&&(j==27)&&(seg[s%10][6]))digit[i][j]='=';
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<30;j++)
		{
			printf("%c",digit[i][j]);
		}
		printf("\n");
	}
}
