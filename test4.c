#include<stdio.h>
int main()
{
	int a,b,t;
	printf("������a��b��ֵ��");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	printf("a=%d,b=%d\n",a,b);
	return 0;
}

