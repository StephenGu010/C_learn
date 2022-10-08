/* c3-1-8.c */
#include<stdio.h>
int main()
{
	int a;
	float d;
	char c1;
	double f;
	long m;
	unsigned p;
    scanf("%d,%c,%f,%lf,%ld,%u",&a,&c1,&d,&f,&m,&p);
	printf("a=%d\n c1=%c\n d=%6.2f\n",a,c1,d);
	printf("f=%15.12f\n m=%ld\n p=%u\n",f,m,p);
	return 0;
}