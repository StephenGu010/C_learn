#include<stdio.h>
#define N 2

void transposition(int x[N][N])
{
	int i, j;
	printf("ת��ǰ��\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d\t", x[i][j]);
		}
		printf("\n");
	}
	printf("ת�ú�\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d\t", x[j][i]);
		}
		printf("\n");
	}
}

int main()
{
	int a[N][N], n, i,j;

	printf("���������飺\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &a[i][j]);
		
		}
	
	}
	transposition(a);

	return 0;
}
