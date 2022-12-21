#include<stdio.h>
int main()
{
int i,j,k;
int square_1[2][3];
int square_2[3][2];
int result[2][2];
printf("input square_1:\n");
for(i=0; i<2; i++)
{
	for(j=0; j<3; j++)
	{
		scanf("%d",&square_1[i][j]);
	}
}
printf("input square_2:\n");
for(i=0; i<3; i++)
{
	for(j=0; j<2; j++)
	{
		scanf("%d",&square_2[i][j]);
	}
}
for(i=0; i<2; i++)
{
	for(j=0; j<2; j++)
	{
		int temp = 0;
		for(k=0; k<3; k++)
		{
			temp += square_1[i][k] * square_2[k][j];
		}
		result[i][j] = temp;
	}
}
printf("output£º\n");
for(i=0; i<2; i++)
{
	for(j=0; j<2; j++)
	{
		printf("%d ",result[i][j]);
	}
	printf("\n");
}
return 0;
}
