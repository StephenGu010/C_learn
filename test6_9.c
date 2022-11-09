#include <stdio.h>
#include<math.h>
int main( )
{ 
	int a,b,c,d;
//定义 4 个整型变量;
for(a=1; a<=9; a++)
for(b=0;b<=9;b++)
for(c=0;c<=9;c++){
 d=a+10*b+100*c;
//将这三个数 a,b,c 组和成一个百位数;
if(d==pow(a,3)+pow(b,3)+pow(c,3))
 printf("a=%d,b=%d,c=%d\n",a,b,c);
}
}