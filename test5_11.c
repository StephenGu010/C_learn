#include<stdio.h>
int main()
{
	int m, msum, i;
	float f, fsum;
	fsum = 0;
	m = 100000;
	f = 0.01;
	msum = m * 30;
	for (i = 1; i <= 30; i++)
	{
		
		fsum += f;
		f *= 2;
	}
	printf("%d,%f", msum, fsum);


	return 0;
}