#include<stdio.h>
#define M 4
int main()
{
	int a[M];
	int i,x,m=M;
	printf("��������\n");
	for(i=0;i<M;i++){
		scanf("%d",&a[i]);
	}
	printf("����Ҫɾ����\n");
	scanf("%d",&x);
	for(i=0;i<M;i++){
		if(a[i]!=x)
		printf("%d  ",a[i]);
	
	}
return 0;

}