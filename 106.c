/* c3-3-3-1.c*/
#include<stdio.h>
void main()
{
	FILE*fp1;
	FILE*fp2;
	int num,math,en,c;
	float avg;
	fp1=fopen("score_avg.txt","w");
	fp2=fopen("score.txt","r");
	fscanf(fp2,"%d%d%d%d",&num,&math,&en,&c);
	avg=(math+en+c)/3;
	fprintf(fp1,"%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","学号","高数","英语","C语言","平均分");
	fprintf(fp1,"%-10d\t%-10d\t%-10d\t%-10d\t%-10f\n",num,math,en,c,avg);
	fclose(fp1);
	fclose(fp2);
}
