#include<stdio.h>
int main()
{
	int x93,a93,b93,c93,max93;
	b93 = 0;
	max93 = 0;
	scanf("%d",&x93);
	a93 = x93;
	do {
		c93 = x93 % 10;
		if (c93 > max93)
			max93 = c93;
		x93 = x93 / 10;
		b93++;
	
	
	} while (x93 > 0);
	printf("位数为%d位\n", b93);
	printf("最大为%d\n", max93);
	
	

	return 0;
}