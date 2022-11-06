/* c5-2-3.c */
#include <stdio.h>
int main( )
{ 
 int num,k;
 /************found************/
 k=1;
printf("请输入一个数：");
scanf("%d",&num) ;
do
{ 
 k=k*(num%10);
 /************found************/
 num /=10;
 } while(num!=0);
printf("\n 各位数字的积为：%d\n",k);
 return 0;
}