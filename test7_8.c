#include<stdio.h>
#define M 10
int main()
{
	int a[M];
	int i, sum = 0;

	for (i = 0; i < M; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < M; i++) {
		if (a[i] % 2 == 0) {
			sum += a[i];
		}
	}
	printf("sum=%d",sum);
	return 0;
}