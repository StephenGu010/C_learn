#include<stdio.h>
int main() {
    int x, n;
    n = 1;
    scanf("%d",&x);
    while (x > 10)
    {
        x /= 10;
        n++;
    }
        printf("%d\n", n);
    return 0;
}