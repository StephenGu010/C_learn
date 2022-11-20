#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 6000
int main()
{
	int num, i, j;
	int a[6] = { 0 };	
	int score[N];
	float p;
	srand(time(NULL));
	rand();
	for (i = 0; i < N; i++) {
		score[i] = rand() % 6 + 1;
	}
	for (j = 1; j <= 6; j++) {
		for (i = 0; i < N; i++) {
			if (score[i] == j) {
				a[j - 1]++;
			}
		}
	}
	for (i = 0; i < 6; i++) {
		printf("点数为 %d 的概率为 %.2f %%\n", i + 1, a[i] / 6000.0 * 100);
	}
	return 0;
}
