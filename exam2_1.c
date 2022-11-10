#include<stdio.h>
#include<math.h>
int main()
{
	int a93,b93,c93,count93,s93;
	double x93, y93,z93,sum93;
	scanf("%lf",&x93);
	count93 = 1;
	s93 = 1;
	sum93 = 0;
	do {
		a93 = 1;
		y93 = pow(x93, count93 * 2 - 1);
		for (c93 = 1; c93 <= count93 * 2 - 1; c93++) {
			a93 = a93 * c93;
		}
		
		z93 = s93 * y93 / a93;
		sum93 += z93;
		count93++;
		s93 = -s93;
	} while (fabs(z93) >= pow(10, -5));
	printf("sin(%lf)=%lf\n",x93,sum93);
	printf("count=%d",count93-1);
	

	return 0;
}
