#include<stdio.h>
int main() {
	int n;
	int a[99];
	int x, t, i;
	printf("�����������\n");
	scanf("%d", &n);
	printf("���������\n");
	for ( i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("����Ҫ�������");
	scanf("%d", &x);
	a[n] = x;
	for ( i = 0; i < n + 1; i++) {
		if (a[i] > a[n]) {
			
			t = a[i];
			a[i] = a[n];
			a[n] = t;
		}
	}
	for ( i = 0; i < n + 1; i++) {
		printf("%d\t", a[i]);
	}
	return 0;
}