/* c3-3-1.c */
#include <stdio.h>
int main()
{
	FILE*fp;
	
	int num,math,eng,cscore;
	float a;
	fp=fopen("score_avg.txt","w");
	printf("学号，高数，英语，c语言\n");
	scanf("%d%d%d%d",&num,&math,&eng,&cscore);
	a=(math+eng+cscore)/3;
	fprintf(fp,"%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","学号","高数","英语","C语言","平均分");
	fprintf(fp,"%-10d\t%-10d\t%-10d\t%-10d\t%-10f\n",num,math,eng,cscore,a);
  return 0;
}