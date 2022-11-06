#include <stdio.h>
#include <math.h>
int main()
{
	double sum, item,k,n;
	n = 1;
	sum = 1;
	item =  1 /( (2*n - 1) * (2*n + 1)) ;
	while(fabs(item) > 1e-6)
	{
		k = 1 + item;
		sum *=k;
		
		n =n+1;item = 1 / ((2 * n - 1) * (2 * n + 1));
	}printf("%.4lf", sum*2);
	return 0;
}