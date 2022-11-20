#include<stdio.h>
#define M 4
int main()
{
	int a[M];
	int i,x,m=M;
	printf("输入数组\n");
	for(i=0;i<M;i++){
		scanf("%d",&a[i]);
	}
	printf("输入要删的数\n");
	scanf("%d",&x);
	for(i=0;i<M;i++){
		if(a[i]!=x)
		printf("%d  ",a[i]);
	
	}
return 0;

}