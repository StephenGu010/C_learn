/* c5-2-3.c */
#include <stdio.h>
int main( )
{ 
 int num,k;
 /************found************/
 k=1;
printf("������һ������");
scanf("%d",&num) ;
do
{ 
 k=k*(num%10);
 /************found************/
 num /=10;
 } while(num!=0);
printf("\n ��λ���ֵĻ�Ϊ��%d\n",k);
 return 0;
}