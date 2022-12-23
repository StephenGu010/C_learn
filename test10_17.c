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

	printf("��������Ҫ��������ĸ�����\n");
	scanf("%d", &n);
	printf("����������Ҫ���������\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	select_sort(a, n);

	printf("��С���������Ϊ��\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
