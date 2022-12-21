#include<stdio.h>
#define N 3
int main() {
	int a[N][N];
	int flag;
	int i = 0; int j = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < N; i++) {
		flag = 1;
		for (j = 0; i < N; j++) {
			if (a[i][j] != a[j][i])
			{
				flag = 0;
				break;
			}

		}

	}
	if (flag)
		printf("yes");
	else
		printf("no");

	return 0;
}