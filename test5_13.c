#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int n = rand();
	int i, num, count, w;
	float money, k, sum, t;
	srand((unsigned)time(NULL));
	printf("红包个数，红包金额\n");
	scanf_s("%d%f", &num, &sum);
	FILE* fp;
	fp = fopen_s(&fp,"red_packet.txt", "w");
	fprintf(fp, "总金额：%.2f\t红包个数：%\n", num, sum);
	k = sum;
	t = sum;
		for (i=1; i < num; i++)
		{
			count = 0;
			do {
				k = k / 10;
				count++;
			} while (sum != 0);
			w = pow(10, count);
			money = (float)(rand() % w);
			t = t - money;
			k = t;
			fprintf(fp, "%.2f\t", money);
		}fprintf(fp, "%.2f/t", t);
		fclose(fp);
		return 0;
}