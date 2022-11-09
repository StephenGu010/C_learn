#include<stdio.h>
int main()
{
	int i;
	float a,b,c,d,sum=0;
	a=2.0;
	b=1.0;
	for(i=1;i<=20;i++){
		sum +=a/b;
		c=a;
		d=b;
		a=c+d;
		b=c;
	}
	printf("sum=%f\n",sum);


return 0;
}