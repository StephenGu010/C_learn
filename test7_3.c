/* c7-2-1.c */
#include <stdio.h>
int main( )
{ 
int i, a[10];
 for( i=1; i<=10; i++)
/**************found************/
 a[i-1]=i;
printf("���� a:\n");
 for(i=0;i<10;i++) 
 printf("%5d",a[i]);
 printf("\n"); 
 for(i=0;i<5;i++) //�������� a ��Ԫ��
/**************found************/
 a[9-i]=i+1;
printf("���ۺ����� a��\n");
 for(i=0;i<10;i++) 
 printf("%5d",a[i]);
 printf("\n"); 
return 0;
}