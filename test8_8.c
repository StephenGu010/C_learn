#include<stdio.h>
int main() {
	int k, n,temp=0;
	int math();
	int nbglass();
	for (n = 0; n < 10; n++) 
	{
		for (k = 0; k <= n; k++) 
		{
			temp = nbglass(k,n);
			printf("%d\t", temp);
		}
		printf("\n");
	}

	return 0;
}
int math(int a) 
{
	int i, temp=1;
	for (i = 1; i <= a; i++) {
		temp *= i;
	}

	return temp;
}


int nbglass(int k, int n) {
	int sum, fenzi,fenmu_1,fenmu_2;
	fenzi = math(n);
	fenmu_1 = math(k);
	fenmu_2 = math(n - k);
	sum = fenzi / (fenmu_1 * fenmu_2);
	return sum;
}

