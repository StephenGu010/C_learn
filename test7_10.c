#include<stdio.h>
int main() {
	int n;
	int a[99];
	int x, t, i,j;
	t=1;
	printf("输入数组个数\n");
	scanf("%d", &n);
	printf("输入各个数\n");
	for ( i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("输入要删的数\n");
	scanf("%d", &x);
	for ( i = 0; i < n ; i++) {
		if (a[i] == x) {
			t=0;
			for(j=i;j<=n-1;j++){
			a[n]=0;
			a[j]=a[j+1];
			}
			
		}
	}if(t)
	printf("没有这个数\n",t);
	else{
	for ( i = 0; i < n ; i++) {
		printf("%d ",a[i]);
	}
	}
	return 0;
}