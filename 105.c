/* c3-3-1.c */
#include <stdio.h>
int main()
{
	FILE*fp;
	
	int num,math,eng,cscore;
	float a;
	fp=fopen("score_avg.txt","w");
	printf("ѧ�ţ�������Ӣ�c����\n");
	scanf("%d%d%d%d",&num,&math,&eng,&cscore);
	a=(math+eng+cscore)/3;
	fprintf(fp,"%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","ѧ��","����","Ӣ��","C����","ƽ����");
	fprintf(fp,"%-10d\t%-10d\t%-10d\t%-10d\t%-10f\n",num,math,eng,cscore,a);
  return 0;
}