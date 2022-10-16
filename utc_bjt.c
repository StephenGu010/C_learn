#include<stdio.h>
#include<math.h>
int main() {
    int utc, bjt,u,t,b,j,f;
    scanf("%d", &utc);
    t = utc % 100;
    u = utc / 100;
    if (u >= 8) {
        bjt = t + u * 60-60*8;
    }
    else {
        bjt = 24 * 60 - (8 * 60 - t - u * 60);
    }
    b = bjt / 60;
    j = bjt % 60;
    f = b * 100 + j;
    printf("%d",f);
    return 0;
}