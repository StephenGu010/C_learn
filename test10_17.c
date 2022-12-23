#include<stdio.h>
#define N 10
void select_sort(int num[], int n)
{
	int i, j, k, t; 
	for (i = 0; i < n - 1; i++) 	{
		k = i; 
		for (j = i + 1; j < n; j++) 
		{
			if (num[j] < num[k])
			{
				k = j; 
			}
		}
		if (k != i) 
		{
			t = num[i];
			num[i] = num[k];
			num[k] = t;
		}
	}
}

int main()
{
	int a[N], n, i; 

	printf("请输入需要排序的数的个数：\n");
	scanf("%d", &n);
	printf("请依次输入要排序的数：\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	select_sort(a, n);

	printf("从小到大的排序为：\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
