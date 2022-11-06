/* c5-2-6.c */
#include <math.h>
#include <stdio.h>
int main()
{
	int n, m, t;
	printf("Please enter two numbers:");
	scanf("%d,%d", &n, &m);
	if (n < m)
	{
		t = n;
		n = m;
		m = t;
	}
	/************found************/
	while (m != 0);
	{
		t = m;
		m = n % m;
		n = t;
		
	}
	/************found************/
	printf("The greatest common divisor is : %d\n", m);
	return 0;
}