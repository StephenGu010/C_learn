/* c10-2-4.c */
#include <stdio.h>
/************found************/
int func(long m)
{ 
long k=1;
 do
{ 
k=k*(m%10);
/************found************/
m=m/10;
/************found************/
}while(m>=10);
 return(k);
}
int main( )
{ 
 long n;
printf("���������� n��");
 scanf("%ld",&n);
 printf("����%ld �ĸ�λ֮��Ϊ:%ld\n",n,func(n));
}