/*c7-1-1.c*/
#include <stdio.h>
int main( )
{ 
int a[5]={10,20,30,40,50};
 int i;
printf("����ѭ�����ÿ������Ԫ�ص�ֵ:\n");
for(i=0;i<5;i++)
 printf("%5d",a[i]);
printf("\n ����ѭ����ʮ���������ÿ������Ԫ�صĵ�ַ:\n");
for(i=0;i<5;i++)
 printf("%10x",&a[i]);
printf("\n �������������� a ռ�Ĵ洢�ռ��С:\n");
 printf("%5d",sizeof(a));
printf("\n");
return 0;
}