/* c8-2-2.c */
#include <stdio.h>
int main( )
{
int i,j,k,a[5][5];
k=2;
for(i=0; i<5; i++) /* ��ѭ�� */
for(j=0; j<5; j++) /* ��ѭ�� */
 /************found************/
 if(j<=i) 
a[i][j]=1; /* ���������������Ԫ�� */
 else
 a[i][j]=k++; /* ���������������Ԫ�� */
printf("array a:\n");
for(i=0; i<5; i++)
{
for(j=0; j<5; j++)
printf("%4d",a[i][j]);
 /************found************/
printf("\n");/* ÿ���һ�к��� */
}
return 0;
}