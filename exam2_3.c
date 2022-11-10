#include<stdio.h>
int main()
{
	int x93, n93,y93;
	for (x93 = 6; x93 >=0; x93--) {
		for (y93 = 6 - x93; y93 >= 0; y93--) {
			printf(" ");
		}for (n93 = x93; n93 > 0; n93--)
			printf("%d", n93);
	printf("\n");
	}


	return 0;
}