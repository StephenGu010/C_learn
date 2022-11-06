#include<stdio.h>
int main()
{
	int m,n,i;
	int t=1;
	printf("输入两个整数");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		if(i%7!=0&&i%3!=0){
		t*=i;
		}
	}
	printf("%d\n",t);

	return 0;
}