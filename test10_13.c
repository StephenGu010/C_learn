#include <stdio.h>
int m, n;
int GCD(int m, int n);
int LCM(int m,int n);
int main()
{
	int a, b;
	printf("input two nunbers : \n");
	scanf("%d%d",&a,&b);
	printf("the GCD is %d\n", GCD(a, b));
	printf("the LCM is %d\n", LCM(a, b));
	return 0;
}
int GCD(int m,int n)
{
	int i,t;
	if (m > n)
	{
		t = m;
		m = n;
		n = t;
	}
		for (i = m;i>0; i--) {
			if (m % i == 0 && n % i == 0)
			break;	
		}
	return i;
}
int LCM(int m, int n)
{
	int i, t;
	if (m > n)
	{
		t = m;
		m = n;
		n = t;
	}
	for (i = m;; i++) {
		if (i % m == 0 && i % n == 0)
			return i;
	}

}