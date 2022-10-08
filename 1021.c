#include<stdio.h>
#include<math.h>
void main()
{
	FILE*fp;
	int year;
	double money,rate,total;
	fp=fopen("credit.txt","r");
	fscanf(fp,"%lf%lf%d",&money,&rate,&year);
	printf("money:%lf,rate:%lf,year:%d\n",money,rate,year);
		total=money*pow(1+rate,year);
	printf("total%f\n",total);
}