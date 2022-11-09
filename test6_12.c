#include <stdio.h>
#include <math.h>
int main() {
	double x0, x1, x2, f0, f1, f2;
	do {
		printf("请输入两个点：");
		scanf("%lf,%lf", &x1, &x2);
		f1 = pow(x1,3)-pow(x1,2)-1;
		f2 = pow(x2,3)-pow(x2,2)-1;
	} while (f1 * f2 > 0);

	do {
		x0 = (x1 + x2) / 2;
		f0 = pow(x0,3)-pow(x0,2)-1;
		if (f0 * f1 < 0) {
			x2 = x0;
			f2 = f0;
		}
		else {
			x1 = x0;
			f1 = f0;
		}
	} while (fabs(f0) >= 0.00001);
	printf("方程根为：%lf\n", x0);

	return 0;
}