/* c7-2-3.c */
#include <stdio.h>
#define N 10
int main( )
{ 
int a[N]={10,20,30,40,50,60,70,80,90,100};
 int low,high,mid,x;
printf("����������ҵ�Ԫ��ֵ:");
scanf("%d",&x);
low=0;
/************found************/
high=100;
/************found************/
while((low+high)/2!=x)
 {
mid=(low+high)/2;
if(x==a[mid] )
{
printf("Ԫ��%d ��λ��Ϊ%d\n",x,mid);
return 1;
}
else 
/************found************/
if(x<a[mid])high=mid-1;
 else low=mid+1;
}
printf("Ԫ��%d û�ҵ�\n",x);
return 0;
}