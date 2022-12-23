#include<stdio.h>
#include<stdlib.h>
double nb_glass(int n, int x) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return x;
	}
	return ((2 * n - 1) * x - nb_glass(n - 1, x) - (n - 1) * nb_glass(n - 2, x)) / n;
}
void main() {
	int n;
	int x;
	printf("请输入n的值和x的值\n");
	scanf("%d %d", &n, &x);
	printf("P%d(%d) = %f\n", n, x, nb_glass(n, x));
}