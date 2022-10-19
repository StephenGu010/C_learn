#include<stdio.h>
#include<math.h>
int main()
{
	int i = 1, n;
	double t = 1.0;
	scanf_s("%d",&n);
	do {
		t = t * i;
		i++;
	} while (i <= n);
	printf("%lf\n", t);
	return 0;
}