#include <stdio.h>
int binary[100], m;
int convert(int m);
int main()
{
	int a, j, i;
	printf("input a nunber : \n");
	scanf("%d",&a);
	i = convert(a);
	printf("the number is %d\n", a);
	printf("the bin is : ");
	for (j = i; j > 0; j--)
	printf("%d", binary[j]);
	printf("\n");
	return 0;
}
int convert(int m)
{
	int i;
	for (i = 0; m!=0; i++) {
		binary[i] = m % 2;
		m = m / 2;
	}
	return i;
}