/* c10-1-5.c */
#include<stdio.h>
int m,n; //ȫ�ֱ���
void swap()
{
int t;
 t=m;m=n;n=t; 
printf("function swap:\n");
printf("m=%d,n=%d\n",m,n);
}
int main()
{ 
printf("please input m and n:");
scanf("%d%d",&m,&n);
swap( ); //���ú��� swap()
printf("function main:\n");
printf("m=%d,n=%d\n",m,n);
return 0;
}