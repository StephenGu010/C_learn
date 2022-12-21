#include<stdio.h>
int main()
{
	char str[20];
FILE*fp1;
fp1=fopen("score.txt","w");
fgets(str,20,stdin);
printf("%f",str);

return 0;
}