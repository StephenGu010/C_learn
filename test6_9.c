#include <stdio.h>
#include<math.h>
int main( )
{ 
	int a,b,c,d;
//���� 4 �����ͱ���;
for(a=1; a<=9; a++)
for(b=0;b<=9;b++)
for(c=0;c<=9;c++){
 d=a+10*b+100*c;
//���������� a,b,c ��ͳ�һ����λ��;
if(d==pow(a,3)+pow(b,3)+pow(c,3))
 printf("a=%d,b=%d,c=%d\n",a,b,c);
}
}