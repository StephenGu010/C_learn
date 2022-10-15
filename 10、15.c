#include<stdio.h>
#include<math.h>
int main() {
    int f, s, t, e, a;
	printf("请输入一个三位数\n");
    scanf("%d",&a);
    s = 0;
    f = a / 100;
    t = a % 10;
    s = (a - t - 100 * f) / 10;
    e = t * 100 + s * 10 + f;
    printf("%d", e);
    return 0;
}